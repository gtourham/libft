/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 14:11:31 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/22 11:54:48 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || dst_len >= size)
		return (size + src_len);
	while (*dst)
	{
		dst++;
	}
	while (size > dst_len + 1 && *src)
	{
		*dst = *src;
		src++;
		dst++;
		size--;
	}
	*dst = '\0';
	return (dst_len + src_len);
}
