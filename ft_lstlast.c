/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:07:41 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/06 17:22:58 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*dst;
	t_list	*rez;

	if (!lst)
		return (0);
	dst = lst;
	while (dst)
	{
		rez = dst;
		dst = dst->next;
	}
	return (rez);
}		
