/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01ex06.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:49:29 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:49:30 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nbr)
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
	int	ac;

	ac = 1;
	while (ac < argc)
	{
		ft_putstr("str = ");
		ft_putstr(argv[ac]);
		ft_putstr("\n");
		ft_putstr("len = ");
		ft_putnbr(ft_strlen(argv[ac]));
		ft_putstr("\n");
		ac++;
	}
	return (0);
}
