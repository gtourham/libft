/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:52 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:55:36 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_intlen(long n, long *numb, size_t *i)
{
	long	temp;

	if (n < 0)
	{
		*numb = -n;
		*i = 1;
	}
	else
	{
		*numb = n;
		*i = 0;
	}
	temp = *numb;
	if (temp == 0)
		(*i)++;
	while (temp > 0)
	{
		temp /= 10;
		(*i)++;
	}
}

static void	ft_putnbr(long n, char *str, size_t *i)
{
	if (n > 9)
		ft_putnbr(n / 10, str, i);
	str[*i] = (n % 10) + '0';
	(*i)++;
}

char	*ft_itoa(int n)
{
	long	number;
	size_t	i;
	char	*p;

	i = 0;
	ft_intlen(n, &number, &i);
	p = malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		p[i++] = '-';
	}
	ft_putnbr(number, p, &i);
	p[i] = '\0';
	return (p);
}
