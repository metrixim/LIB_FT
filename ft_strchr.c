/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 16:58:20 by gcarelle          #+#    #+#             */
/*   Updated: 2021/04/28 17:22:41 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	h;
	char	*arr;

	h = (char)c;
	arr = (char *)s;
	if (h == '\0')
		return (arr + ft_strlen(arr));
	while (*arr)
	{
		if (*arr == h)
			return (arr);
		arr++;
	}
	return (0);
}
