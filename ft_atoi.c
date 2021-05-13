/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:48:25 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 21:31:21 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	rez;
	int				i;
	int				m;

	i = 0;
	m = 1;
	rez = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
		   	 || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		m = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10 + (str[i] - '0');
		if (rez > 2147483648 && m == -1)
			return (0);
		if (rez > 2147483648)
			return (-1);
		i++;
	}
	return (m * rez);
}
