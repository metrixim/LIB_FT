/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 16:25:55 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 21:34:03 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		arr = malloc(sizeof(char));
		*arr = '\0';
		return (arr);
	}
	if (start + len > ft_strlen(s))
		arr = malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		arr = malloc((len + 1) * sizeof(char));
	i = -1;
	start -= 1;
	if (!arr)
		return (0);
	while (++i < len && s[++start])
		arr[i] = s[start];
	arr[i] = '\0';
	return (arr);
}
