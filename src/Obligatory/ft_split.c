/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaigonza <jaigonza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:00:11 by jaigonza          #+#    #+#             */
/*   Updated: 2024/04/18 11:49:49 by jaigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	countwords(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (count);
}

static void	*free_strs(char**strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		count ;

	if (!s)
		return (NULL);
	count = countwords(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	strs[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs));
			s += wordlen(s, c);
		}
		else
			s++;
	}
	return (strs);
}

/*int main()
  {
  const char	*str = "Hola que tal";
  char		c = " ";
  char	result = ft_split(str, c);
  int			i = 0;
  while(result[i] != NULL)
  {
  printf("%s\n", result);
  i++;
  free (result);
  }
  return (0);
  }*/
