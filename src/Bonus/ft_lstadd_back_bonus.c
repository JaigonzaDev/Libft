/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:31:25 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 17:14:27 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodo;

	if (lst)
	{
		if (*lst)
		{
			nodo = ft_lstlast(*lst);
			nodo->next = new;
			return ;
		}
		else
		{
			*lst = new;
		}
	}
}

// int	main(void)
// {
// t_list *lst = NULL;
//
// t_list *node1 = ft_lstnew("Uno");
// t_list *node2 = ft_lstnew("Dos");
// t_list *node3 = ft_lstnew("Tres");
//
// ft_lstadd_back(&lst, node1);
// ft_lstadd_back(&lst, node2);
// ft_lstadd_back(&lst, node3);
// while (lst)
// {
// printf("%s", (char *)lst->content);
// lst = lst->next;
// }
// printf("NULL\n");
//
// return (0);
// }