/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:38 by jaigonza          #+#    #+#             */
/*   Updated: 2024/04/17 16:53:25 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include "stdio.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	j = 0;
	i = 0;
	len = 0;
	if (dstsize == 0 && dst == NULL)
		return (ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (dstsize <= i)
		len += dstsize;
	else
		len += i;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main(void)
{
	char dest[50] = "Hola";
	const char src[] = "Buenas";
	ft_strlcat(dest, (char *)src, 50);
	printf("%u\n", total_length);
	printf("%s\n", dest);
	return (0);
}*/
