/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 22:25:36 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/06 22:33:50 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = malloc(size * count);
	if (!arr)
		return (NULL);
	while (i < size * count)
	{
		*(arr + i) = 0;
		i++;
	}
	return (arr);
}
