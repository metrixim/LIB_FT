/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:44:30 by gcarelle          #+#    #+#             */
/*   Updated: 2021/05/05 19:27:52 by gcarelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	s;

	s = n;
	if (s < 0)
	{
		ft_putchar_fd('-', fd);
		s = -s;
	}
	if (s > 9)
		ft_putnbr_fd(s / 10, fd);
	ft_putchar_fd((char)(s % 10 + '0'), fd);
}
