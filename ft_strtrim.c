/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:54:55 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 21:01:56 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	front(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = -1;
	j = 0;
	while (++i < (int)ft_strlen(set))
	{
		if (s1[j] == set[i])
		{
			j++;
			i = -1;
		}
	}
	return (j);
}

static int	back(char const *s1, char const *set)
{
	int	i;
	int	z;

	i = -1;
	z = (int)ft_strlen(s1) - 1;
	while (++i < (int)ft_strlen(set))
	{
		if (s1[z] == set[i])
		{
			z--;
			i = -1;
		}
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		j;
	int		i;
	int		z;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = front(s1, set);
	if (j == (int)ft_strlen(s1))
	{
		res = (char *) malloc(1);
		if (!res)
			return (0);
		*res = '\0';
		return (res);
	}
	z = back(s1, set);
	res = (char *) malloc((z - j + 2) * (sizeof(char)));
	if (!res)
		return (0);
	while (j <= z)
		res[i++] = s1[j++];
	res[i] = '\0';
	return (res);
}
