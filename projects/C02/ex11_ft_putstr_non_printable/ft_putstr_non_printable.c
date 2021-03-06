/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:30 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:09:30 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexchar(char c)
{
	if (c >= 16)
		ft_put_hexchar(c / 16);
	c %= 16;
	if (c >= 0 && c <= 9)
		ft_putchar(c + '0');
	if (c >= 10 && c <= 15)
		ft_putchar(c - 10 + 'a');
}

static int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	if (str)
	{
		while (*str)
		{
			if (!ft_is_printable(*str))
			{
				ft_putchar('\\');
				ft_putchar('0');
				ft_put_hexchar(*str);
			}
			else
				ft_putchar(*str);
			str++;
		}
	}
}
