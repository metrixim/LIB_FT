/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 18:03:13 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 19:17:28 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*arr;

	arr = (unsigned char *) s;
	while (n > 0)
	{
		if (*arr == (unsigned char) c)
			return (arr);
		arr++;
		n--;
	}
	return (NULL);
}
