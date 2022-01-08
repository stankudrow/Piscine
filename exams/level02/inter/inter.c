/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:54:28 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/08 10:54:29 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// find a character c in the first n bytes of a string s
char	*ft_strnchr(char *s, char c, size_t n)
{
	while (*s && n)
	{
		if (*s == c)
			return (s);
		s++;
		n--;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	size_t	c1;
	size_t	c2;

	if (ac == 3)
	{
		c1 = 0;
		c2 = 0;
		while (av[1][c1] && av[2][c2])
		{
			while (av[2][c2] != av[1][c1])
				c2++;
			if (av[2][c2] && !ft_strnchr(av[1], av[1][c1], c1))
				write(1, &av[2][c2], 1);
			c1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
