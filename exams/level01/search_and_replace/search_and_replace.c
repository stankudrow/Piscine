/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 00:00:20 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 00:11:33 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	size_t	len;

	if (ac == 4)
	{
		len = 0;
		while (av[1][len])
		{
			if (av[1][len] == *av[2])
				av[1][len] = *av[3];
			len++;
		}
		write(1, av[1], len);
	}
	write(1, "\n", 1);
	return (0);
}
