/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:28:38 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 17:29:00 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			i++;
		}
		return (i);
	}
	return (0);
}

// int	main(void)
// {
// t_list	*lst;
// t_list	*node1;
// t_list	*node2;
// t_list	*node3;
// int		size;
//
// lst = NULL;
// node1 = ft_lstnew("Uno");
// node2 = ft_lstnew("Dos");
// node3 = ft_lstnew("Tres");
// node1->next = node2;
// node2->next = node3;
// printf("%d", ft_lstsize(node1));
// return (0);
// }
