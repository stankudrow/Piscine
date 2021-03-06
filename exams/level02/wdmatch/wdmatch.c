/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 09:35:17 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/08 09:35:18 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	size_t	c1;
	size_t	c2;

	if (ac == 3)
	{
		c1 = 0;
		c2 = 0;
		while (av[2][c2] && av[1][c1])
		{
			if (av[2][c2] == av[1][c1])
				c1++;
			c2++;
		}
		if (!av[1][c1])
			write(1, av[1], c1);
	}
	write(1, "\n", 1);
	return (0);
}
