/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:31:05 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 19:47:49 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i])
		i++;
	while (src[res])
		res++;
	if (i <= dstsize)
		res += i;
	else
		res += dstsize;
	while (i + 1 < dstsize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
