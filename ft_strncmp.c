/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:07:19 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 23:00:22 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	if (dst[i] == '\0')
		return ((int)((unsigned char)dst[i] - (unsigned char)src[i]));
	while (i < len)
	{
		if (dst[i] == '\0' || src[i] == 0)
			return ((int)((unsigned char)dst[i] - (unsigned char)src[i]));
		if (dst[i] != src[i])
			return ((int)((unsigned char)dst[i] - (unsigned char)src[i]));
		i++;
	}
	return (0);
}
