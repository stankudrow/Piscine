/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:45:48 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:45:49 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			ft_putchar(*str++);
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

void	ft_print_comb2(void)
{
	unsigned int	first;
	unsigned int	second;

	first = 0;
	while (first < 98)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_putnbr(first);
			ft_putstr(" ");
			ft_putnbr(second);
			ft_putstr(", ");
			second++;
		}
		first++;
	}
	ft_putstr("98 99");
}
