/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:57:28 by gcarelle          #+#    #+#             */
/*   Updated: 2021/04/28 22:32:32 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (src[j] == '\0')
		return ((char *)dst);
	while (i < len && dst[i])
	{
		k = i;
		j = 0;
		while (dst[k] == src[j] && k < len)
		{
			if (src[j + 1] == '\0')
				return ((char *)&dst[i]);
			k++;
			j++;
		}
		i++;
	}
	return (0);
}
