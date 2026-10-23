/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:12:00 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:55:44 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			count;

	count = nmemb * size;
	i = 0;
	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(count);
	if (!p)
		return (NULL);
	while (i < count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
