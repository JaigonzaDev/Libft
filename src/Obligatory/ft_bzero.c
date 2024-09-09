/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:30:13 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:45:57 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	if (n > 0)
	{
		while (n-- > 0)
			*ptr++ = 0;
		return ;
	}
	else
	{
		return ;
	}
}

// int	main(void)
// {
// int i = 0;
// int array[5];
// ft_bzero(array, 5);
// while (i++ < 5)
// printf("%d", array[0]);
// return (0);
// }