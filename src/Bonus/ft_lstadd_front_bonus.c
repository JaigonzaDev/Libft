/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:13:37 by jaigonza          #+#    #+#             */
/*   Updated: 2024/10/06 12:32:55 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Add a new node to the front of a linked list.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
		{
			new->next = *lst;
		}
		*lst = new;
	}
}