/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:57:42 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/12 01:57:43 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32);
}

int	main(int ac, char **av)
{
	int	istart;
	int	iend;

	if (ac == 2)
	{
		istart = 0;
		while (av[1][istart])
			istart++;
		iend = --istart;
		while (istart > 0 && ft_isspace(av[1][istart]))
			istart--;
		while (istart > 0 && !ft_isspace(av[1][istart]))
			istart--;
		if (istart)
			write(1, av[1] + istart + 1, iend - istart);
	}
	write(1, "\n", 1);
	return (0);
}
