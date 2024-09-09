/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:18:08 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 17:53:32 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

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

// void	print(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// t_list *node1 = ft_lstnew("Uno");
// t_list *node2 = ft_lstnew("Dos");
// t_list *node3 = ft_lstnew("Tres");
//
// node1->next = node2;
// node2->next = node3;
// ft_lstiter(node1, &print);
// return (0);
// }