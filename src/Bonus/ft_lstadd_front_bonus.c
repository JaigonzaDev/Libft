/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:13:37 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 16:49:11 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

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

// int	main(void)
// {
// t_list *lst = NULL;
//
// t_list *node1 = ft_lstnew("Hola");
// t_list *node2 = ft_lstnew("que");
// t_list *node3 = ft_lstnew("tal");
//
// ft_lstadd_front(&lst, node1);
// ft_lstadd_front(&lst, node2);
// ft_lstadd_front(&lst, node3);
// while (lst)
// {
// printf("%p  ", lst->content);
// lst = lst->next;
// }
// printf("NULL\n");
//
// return (0);
// }