/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:47:12 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:47:52 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
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

int	main(void)
{
	int	ival;
	int	*iptr;

	ival = 21;
	iptr = &ival;
	ft_putstr("Before ft_ft: ival = ");
	ft_putnbr(ival);
	ft_putchar('\n');
	ft_ft(iptr);
	ft_putstr("After  ft_ft: ival = ");
	ft_putnbr(ival);
	ft_putchar('\n');
	return (0);
}
