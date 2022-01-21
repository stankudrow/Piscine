/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:50:03 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/22 00:50:06 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The Norm is not checked on exams

#include <unistd.h>

static void	ft_putchar(int c)
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

static int	ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32);
}

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		nbr = 10 * nbr + (*nptr - '0');
		nptr++;
	}
	return (sign * nbr);
}

int	ft_is_prime(int nbr)
{
	int	n;

	if (nbr < 2)
		return (0);
	if (nbr == 2)
		return (1);
	n = 2;
	while (n < nbr)
	{
		if (nbr % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_add_prime_sum(int nbr)
{
	int	n;
	int	sum;

	if (nbr < 2)
		return (0);
	n = 2;
	sum = 0;
	while (n <= nbr)
	{
		if (ft_is_prime(n))
			sum += n;
		n++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
