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

/*
 *	Writes a character (c) to a specified file descriptor (fd). 
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}