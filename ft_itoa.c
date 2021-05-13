/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:44:31 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/04 19:13:25 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	symbols(int n)
{
	int	k;

	k = (int)(n < 0);
	while (n / 10 != 0)
	{
		k++;
		n = n / 10;
	}
	k++;
	return (k);
}

char	*ft_itoa(int n)
{
	long int	s;
	int			k;
	char		*arr;

	k = symbols(n);
	arr = (char *)malloc((k + 1) * sizeof(char));
	if (!arr)
		return (0);
	arr[k--] = '\0';
	s = n;
	if (s < 0)
		s = -s;
	while (k >= 0)
	{
		if (k == 0 && n < 0)
		{
			arr[k] = '-';
			break ;
		}
		arr[k] = (s % 10) + '0';
		s = s / 10;
		k--;
	}
	return (arr);
}
