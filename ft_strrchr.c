/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:23:07 by gcarelle          #+#    #+#             */
/*   Updated: 2021/04/28 18:04:46 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	h;
	char	*arr;

	arr = (char *)(s + ft_strlen(s));
	h = (char)c;
	while (arr != (char *)s)
	{
		if (*arr == h)
			return (arr);
		arr--;
	}
	if (*arr == h)
		return (arr);
	return (0);
}
