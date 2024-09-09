/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:23:56 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 16:56:02 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = NULL;

	while (n-- > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			p = s;
			break ;
		}
		s = (unsigned char *)s + 1;
	}
	return ((void *)p);
}

// int	main(void)
// {
// char	*a;
// char	p[4] = "hola";
//
// a = ft_memchr(p, 'o', 4);
// printf("%s", a);
// return (0);
// }
