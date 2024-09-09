/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:03:04 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 15:49:23 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

// void	function(unsigned int index, char *c)
// {
// if (*c >= 'a' && *c <= 'z')
// *c = *c - ('a' - 'A');
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// int	main(void)
// {
// char str[] = "hola que tal";
// ft_striteri(str, &function);
// printf("%s\n", str);
// return (0);
// }