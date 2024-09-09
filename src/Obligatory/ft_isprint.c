/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:33:49 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:04:14 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// int		i;
// char	array[11] = "H123 Z{}~**";
//
// i = 0;
// while (array[i] != '\0')
// {
// printf("%d", ft_isprint((int)array[i]));
// i++;
// }
// return (0);
// }
