/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc01ex08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:50:22 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:50:23 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

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

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (sign * num);
}

// VLA are forbidden
int	main(int argc, char **argv)
{
	int	tab[argc];
	int	ac;

	ac = 1;
	while (ac < argc)
	{
		tab[ac - 1] = ft_atoi(argv[ac]);
		ac++;
	}
	ft_sort_int_tab(tab, argc - 1);
	ac = 1;
	while (ac < argc)
	{
		ft_putnbr(tab[ac - 1]);
		ft_putchar(' ');
		ac++;
	}
	ft_putchar('\n');
	return (0);
}
