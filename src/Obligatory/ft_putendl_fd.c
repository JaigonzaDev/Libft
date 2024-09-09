/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:45:55 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 16:03:32 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int	main(void)
// {
// 	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
// 			S_IRUSR | S_IWUSR);
// 	if (fd == -1)
// 	{
// 		return (1);
// 	}
// 	ft_putendl_fd("hola que tal", fd);
// 	close(fd);
// 	return (0);
// }