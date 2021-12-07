/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:17:00 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 00:20:41 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	size_t	len;

	if (ac == 2)
	{
		len = 0;
		while (av[1][len])
		{
			if (av[1][len] >= 'A' && av[1][len] <= 'Z')
				av[1][len] += 32;
			else if (av[1][len] >= 'a' && av[1][len] <= 'z')
				av[1][len] -= 32;
			len++;
		}
		write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
