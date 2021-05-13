/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:07:57 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 23:44:29 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*replace_char(char *s, char c, int *count)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			res[j++] = s[i++];
		if (j != 0 && res[j - 1] != '\0')
		{
			res[j] = '\0';
			*count += 1;
			j++;
		}
	}
	return (res);
}

static void	free_res(char **res, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static void	full_res(char **res, char *dst, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		res[i] = ft_strdup(dst);
		if (!res[i])
			free_res(res, count);
		dst += (ft_strlen(dst) + 1);
		i++;
	}
	res[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	*dst;
	char	*tmp;
	char	**res;
	int		count;

	if (!s)
		return (0);
	count = 0;
	dst = replace_char((char *)s, c, &count);
	tmp = dst;
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (!res)
		return (0);
	full_res(res, dst, count);
	free(tmp);
	return (res);
}
