/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:48 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 18:33:26 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*p2;

	p = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	while (n > 0)
	{
		*p = *p2;
		p++;
		p2++;
		n--;
	}
	return (dest);
}
