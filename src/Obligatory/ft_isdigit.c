/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:56:17 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 09:58:33 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include "stdio.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int		i;
	char	array[11] = "H123 Z{}~**";

	i = 0;
	while (array[i] != '\0')
	{
		printf("%d", ft_isdigit((int)array[i]));
		i++;
	}
	return (0);
}*/
