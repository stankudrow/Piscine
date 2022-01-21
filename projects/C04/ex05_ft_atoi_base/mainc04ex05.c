/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04ex05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:56:36 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/22 01:56:36 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_atoi_base(char *str, char *base);

static void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr_nbase(int nbr, char *base_set, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -base)
			ft_putnbr_nbase(nbr / -base, base_set, base);
		ft_putchar(base_set[-(nbr % base)]);
	}
	else
	{
		if (nbr >= base)
			ft_putnbr_nbase(nbr / base, base_set, base);
		ft_putchar(base_set[nbr % base]);
	}
}

int	main(int argc, char **argv)
{
	int	nbase;

	if (argc == 3 || argc == 4)
	{
		if (argc == 4)
		{
			nbase = ft_strlen(argv[3]);
			ft_putnbr_nbase(ft_atoi_base(argv[1], argv[2]), argv[3], nbase);
		}
		else
			ft_putnbr_nbase(ft_atoi_base(argv[1], argv[2]), "0123456789", 10);
		write(1, "\n", 1);
	}
	return (0);
}
