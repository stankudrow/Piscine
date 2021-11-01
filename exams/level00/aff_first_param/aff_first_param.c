/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:11:25 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 11:11:26 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
