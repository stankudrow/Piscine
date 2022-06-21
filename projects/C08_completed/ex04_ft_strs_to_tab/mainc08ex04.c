/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc08ex04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:24 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:15:47 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

size_t	ft_strlen(const char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
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

void	ft_free_tab(struct s_stock_str *tab)
{
	int	cnt;

	cnt = 0;
	while (tab[cnt].str)
	{
		free(tab[cnt].copy);
		cnt++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	if (argc > 1)
	{
		tab = ft_strs_to_tab(argc, argv);
		ft_show_tab(tab);
		ft_free_tab(tab);
	}
	return (0);
}
