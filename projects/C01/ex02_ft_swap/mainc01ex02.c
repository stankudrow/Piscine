/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:41:57 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 10:44:19 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

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

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	ft_putstr("Before ft_swap: a = ");
	ft_putnbr(a);
	ft_putstr(", b = ");
	ft_putnbr(b);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putstr("After ft_swap: a = ");
	ft_putnbr(a);
	ft_putstr(", b = ");
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
