/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc07ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:26:15 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 14:26:15 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max);

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

static int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
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

int	main(int argc, char **argv)
{
	int	*range;
	int	min;
	int	max;
	int	cnt;
	int	rsize;

	if (argc == 3)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		rsize = ft_ultimate_range(&range, min, max);
		if (rsize > 0)
		{
			cnt = 0;
			while (min++ < max)
			{
				ft_putnbr(range[cnt++]);
				ft_putchar('\n');
			}
			free(range);
			ft_putchar('\n');
		}
		ft_putnbr(rsize);
		ft_putchar('\n');
	}
}
