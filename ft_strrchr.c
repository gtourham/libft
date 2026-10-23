/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:17 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:54:29 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*s)
	{
		if (*s == (unsigned char) c)
			p = s;
		s++;
	}
	if (*s == (unsigned char) c)
		p = s;
	if (*p == (unsigned char) c)
		return ((char *) p);
	return (NULL);
}
