/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc08ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:24:06 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/22 02:24:07 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_point.h"

void	set_point(t_point	*point)
{
	point->x = 42;
	point->y = 21;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_print_point(t_point	*point)
{
	ft_putnbr(point->x);
	ft_putchar(' ');
	ft_putnbr(point->y);
	ft_putchar('\n');
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	ft_print_point(&point);
	return (0);
}
