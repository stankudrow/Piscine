/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:33:04 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 11:33:04 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	cnt;

	if (argc > 1)
	{
		cnt = 1;
		while (cnt < argc)
		{
			ft_putstr(argv[cnt]);
			ft_putstr("\n");
			cnt++;
		}
	}
	return (0);
}
