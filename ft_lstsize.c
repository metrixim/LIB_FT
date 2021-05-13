/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:48:34 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/06 17:06:43 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*dst;

	size = 0;
	dst = lst;
	while (dst)
	{
		size++;
		dst = dst->next;
	}
	return (size);
}
