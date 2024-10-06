/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:20:08 by jaigonza          #+#    #+#             */
/*   Updated: 2024/10/06 12:32:58 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Find and return the last node in a linked list.
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
		}
		return (lst);
	}
	return (NULL);
}