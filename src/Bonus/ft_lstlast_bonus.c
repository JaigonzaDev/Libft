/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 16:20:08 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 17:03:06 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

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

// int	main(void)
// {
// t_list *lst = ft_lstnew("Uno");
// t_list *node2 = ft_lstnew("Dos");
// t_list *node3 = ft_lstnew("Tres");
// lst->next = node2;
// node2->next = node3;
// t_list *last_node = ft_lstlast(lst);
// printf("%s\n", (char *)last_node->content);
// }