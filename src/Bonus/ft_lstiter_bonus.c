/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:18:08 by jaigonza          #+#    #+#             */
/*   Updated: 2024/10/06 12:32:58 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Iterates through each node of a linked list and applies a specified function
 */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !(f))
		return ;
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
	return ;
}