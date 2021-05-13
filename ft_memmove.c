/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:59:37 by gcarelle          #+#    #+#             */
/*   Updated: 2021/04/25 20:04:56 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst1;
	const char	*src1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	if (src1 > dst1)
	{	
		while (len > 0)
		{
			*dst1 = *src1;
			dst1++;
			src1++;
			len--;
		}
	}
	else if (src1 < dst1)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len --;
		}
	}
	return (dst);
}
