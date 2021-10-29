/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:24:38 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 10:24:38 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (str)
		while (*str)
			write(1, str++, 1);
}

void	ft_print_combns(char *digits, char start, int depth, int indepth)
{
	if ((depth > 0) && (depth < 10))
	{
		while ((start >= '0') && (start <= '9'))
		{
			digits[indepth] = start;
			ft_print_combns(digits, start + 1, depth - 1, indepth + 1);
			start++;
		}
		return ;
	}
	ft_putstr(digits);
	while (digits[depth])
	{
		if (digits[depth++] != ('9' - indepth-- + 1))
		{
			ft_putstr(", ");
			break ;
		}
	}
}

void	ft_print_combn(int n)
{
	static char	digits[11];

	if ((n > 0) && (n < 10))
		ft_print_combns(digits, '0', n, 0);
}
