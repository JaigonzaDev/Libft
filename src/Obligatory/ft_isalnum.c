/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:22:29 by jaigonza          #+#    #+#             */
/*   Updated: 2024/03/22 10:02:31 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Checks for an alphanumeric character.
 */

int	ft_isalnum(int c)
{
	unsigned char	d;

	d = c;
	if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122) || (d >= 48 && d <= 57))
		return (1);
	else
		return (0);
}