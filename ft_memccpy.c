/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:20:03 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 19:45:09 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*arr;
	unsigned char	*str;

	arr = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (n > 0)
	{
		*arr = *str;
		arr++;
		if (*str == (unsigned char)c)
		{
			return (arr);
		}	
		str++;
		n--;
	}
	return (NULL);
}
