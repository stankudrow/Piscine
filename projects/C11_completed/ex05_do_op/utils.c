/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:05:23 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 12:05:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

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

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	ft_putstr("\n");
}
