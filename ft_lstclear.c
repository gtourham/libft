/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ghtourha <ghtourha@student.1337.ma>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/19 15:25:42 by ghtourha         #+#    #+#              */
/*   Updated: 2026/10/26 18:22:11 by ghtourha        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node != NULL)
	{
		next_node = node->next;
		ft_lstdelone(node, del);
		node = next_node;
	}
	*lst = NULL;
}
