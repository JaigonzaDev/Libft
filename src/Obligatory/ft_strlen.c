/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:25:40 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:15:21 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

size_t	ft_strlen(const char *s)
{
	const char	*p;
	size_t		i;

	p = s;
	i = 0;
	while (*p != '\0')
	{
		i++;
		p++;
	}
	return (i);
}

// int	main(void)
// {
// size_t i;
// const char array[19] = "Hola\n";
// printf("%zu", i = ft_strlen(array));
// return (0);
// }