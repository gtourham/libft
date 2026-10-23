/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:12:03 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:55:54 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	sign;
	int		numba;

	numba = 0;
	sign = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
	{
		nptr++;
	}
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign++;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		numba = (numba * 10) + (*nptr - '0');
		nptr++;
	}
	if (sign % 2 != 0)
		return (-numba);
	return (numba);
}
