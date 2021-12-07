/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:10:09 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/07 01:36:45 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	count;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			count = 1;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 'A' + 1;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 'a' + 1;
			while (count)
			{
				write(1, av[1] + i, 1);
				count--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
