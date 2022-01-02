/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:45:33 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/02 23:50:45 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(void)
{
	int	number;
	int	div3;
	int	div5;

	number = 1;
	while (number <= 100)
	{
		div3 = number % 3;
		div5 = number % 5;
		if (!(div3 && div5))
		{
			if (!div3)
				write(1, "fizz", 4);
			if (!div5)
				write(1, "buzz", 4);
		}
		else
			ft_putnbr(number);
		write(1, "\n", 1);
		number++;
	}
}
