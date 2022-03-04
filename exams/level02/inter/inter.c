/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:54:28 by stanislav         #+#    #+#             */
/*   Updated: 2022/03/04 23:04:35 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

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
	char	*s1;
	char	*s2;
	size_t	len2;

	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		len2 = ft_strlen(s2);
		while (*s1 && *s2)
		{
			if (!ft_strnchr(av[1], *s1, s1 - av[1]))
			{
				s2 = ft_strnchr(s2, *s1, len2);
				if (s2)
					write(1, s2, 1);
				else
					s2 = av[2];
			}
			s1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
