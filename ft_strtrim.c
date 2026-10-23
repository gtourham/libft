/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:18 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 19:46:57 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char c, char const *st)
{
	size_t	i;

	i = 0;
	while (st[i])
	{
		if (st[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_set(s1[i], set) == 1)
		i++;
	len = ft_strlen(s1);
	while (len > i && is_set(s1[len - 1], set) == 1)
		len--;
	return (ft_substr(s1, i, len - i));
}
