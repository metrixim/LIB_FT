/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:17:30 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/06 19:48:20 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list_element;
	t_list	*iter;
	t_list	*start_list;

	iter = lst;
	if (iter)
	{
		list_element = ft_lstnew(f(iter->content));
		if (!list_element)
			return (0);
		start_list = list_element;
		iter = iter->next;
	}
	while (iter)
	{
		list_element = ft_lstnew(f(iter->content));
		if (!list_element)
			ft_lstclear(&start_list, del);
		else
			ft_lstadd_back(&start_list, list_element);
		iter = iter->next;
	}
	return (start_list);
}
