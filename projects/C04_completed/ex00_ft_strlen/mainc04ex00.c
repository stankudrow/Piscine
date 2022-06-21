/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:00:44 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:00:44 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
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

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (--argc >= 1)
	{
		ft_putstr("str = ");
		ft_putstr(argv[i]);
		ft_putstr("\n");
		ft_putstr("len = ");
		ft_putnbr(ft_strlen(argv[i]));
		ft_putstr("\n");
		i++;
	}
	return (0);
}
