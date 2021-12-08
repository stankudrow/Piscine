/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:42:30 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:43:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	main(int ac, char **av)
{
	char	*str;
	size_t	len;

	if (ac == 2)
	{
		str = av[1];
		len = 0;
		while (*str)
		{
			if (ft_islower(*str))
				*str = 'z' - (*str - 'a');
			if (ft_isupper(*str))
				*str = 'Z' - (*str - 'A');
			str++;
			len++;
		}
		write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
