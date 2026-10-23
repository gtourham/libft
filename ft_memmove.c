/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:46 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 18:41:43 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_forth(unsigned char *ds, unsigned char *sc, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ds[i] = sc[i];
		i++;
	}
	return (ds);
}

static void	*ft_back(unsigned char *ds, unsigned char *sc, size_t len)
{
	while (len > 0)
	{
		len--;
		ds[len] = sc[len];
	}
	return (ds);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (p1 <= p2)
		return (ft_forth(p1, p2, n));
	else
		return (ft_back(p1, p2, n));
}
