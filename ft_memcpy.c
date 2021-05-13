/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:58:04 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 19:43:36 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*arr;
	const char	*arr1;

	arr = (char *)dst;
	arr1 = (const char *)src;
	if (!arr && !arr1)
		return (NULL);
	while (n --)
	{
		*arr = *arr1;
		arr++;
		arr1++;
	}
	return (dst);
}
