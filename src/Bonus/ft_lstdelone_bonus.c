/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:58:02 by jaigonza          #+#    #+#             */
/*   Updated: 2024/10/06 12:32:57 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Delete a specific node from a linked list and free the memory occupied by both 
 *	the node's content and the node itself.
 */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
