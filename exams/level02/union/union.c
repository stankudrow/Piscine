/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:20:35 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/08 09:20:57 by stanislav        ###   ########.fr       */
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
	size_t	len1;
	size_t	len2;

	if (ac == 3)
	{
		len1 = 0;
		while (av[1][len1])
		{
			if (!ft_strnchr(av[1], av[1][len1], len1))
				write(1, &av[1][len1], 1);
			len1++;
		}
		len2 = 0;
		while (av[2][len2])
		{
			if (!ft_strnchr(av[2], av[2][len2], len2))
				if (!ft_strnchr(av[1], av[2][len2], len1))
					write(1, &av[2][len2], 1);
			len2++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
