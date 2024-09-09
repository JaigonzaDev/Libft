/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:43:42 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 16:00:53 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC,
// S_IRUSR | S_IWUSR);
// if (fd == -1)
// {
// return (1);
// }
// ft_putchar_fd('h', fd);
// close(fd);
// return (0);
// }