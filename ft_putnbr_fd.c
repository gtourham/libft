/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putnbr_fd.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 18:20:45 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:55:05 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nu;

	nu = n;
	if (nu < 0)
	{
		nu *= -1;
		write(fd, "-", 1);
	}
	if (nu > 9)
		ft_putnbr_fd(nu / 10, fd);
	ft_putchar_fd(nu % 10 + '0', fd);
}
