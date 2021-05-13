/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 18:55:36 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/06 19:04:21 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_el;
	t_list	*to_del;

	to_del = *lst;
	while (to_del)
	{
		next_el = to_del->next;
		ft_lstdelone(to_del, del);
		to_del = next_el;
	}
	*lst = NULL;
}
