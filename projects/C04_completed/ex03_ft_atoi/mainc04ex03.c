/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:02:42 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:02:43 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -10)
			ft_putnbr(nbr / -10);
		ft_putchar(-(nbr % 10) + '0');
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
