/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:10:39 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 17:54:54 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (p != NULL)
	{
		p = ft_memset(p, 0, count * size);
		return (p);
	}
	return (NULL);
}

// int	main(void)
// {
// void	*p;
//
// p = ft_calloc(4, sizeof(int));
// if (p != NULL)
// {
// printf("%d", *(int *)p);
// return (0);
// }
// return (1);
// }
