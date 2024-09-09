/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:46:59 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:52:01 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*dest;
	size_t				i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	source = src;
	dest = dst;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Hola buenas tardees";
// 	char	dst[20] = "12315";

// 	ft_memcpy(dst, src, sizeof(src));
// 	printf("dst: %s\n", dst);
// 	return (0);
// }
