/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 02:48:31 by stanisla          #+#    #+#             */
/*   Updated: 2022/01/22 02:48:38 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
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

void	ft_show_tab(struct s_stock_str *tab)
{
	int	cnt;

	cnt = 0;
	while (tab[cnt].str)
	{
		ft_putstr(tab[cnt].str);
		ft_putstr("\n");
		ft_putnbr(tab[cnt].size);
		ft_putstr("\n");
		ft_putstr(tab[cnt].copy);
		ft_putstr("\n");
		cnt++;
	}
}
