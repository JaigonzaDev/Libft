/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:57:50 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:39:38 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	d;

	ptr = b;
	d = c;
	while (len-- > 0)
		*ptr++ = d;
	return (b);
}

// int	main(void)
// {
// char	array[5];
//
// printf("%s", ft_memset(array, 'A', 5));
// return (0);
// }
