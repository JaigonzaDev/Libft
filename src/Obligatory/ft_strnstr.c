/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:16:27 by jaigonza          #+#    #+#             */
/*   Updated: 2024/04/17 16:58:58 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include "stdio.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (len == 0 && !haystack)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

// int	main(void)
// {
// char	*p;
//
// p = ft_strnstr("hola que tal", "que", 12);
// printf("%s", p);
// return (0);
// }
