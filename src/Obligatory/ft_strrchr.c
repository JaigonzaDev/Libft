/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:44:56 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 12:14:19 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	int		i;

	d = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == d)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == d)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	const char array[5] = "holo*";
// 	char *p;

// 	p = ft_strrchr(array, 'o');
// 	printf("%s", p);
// 	return (0);
// }