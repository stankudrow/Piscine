/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:33:51 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:33:51 by stanislav        ###   ########.fr       */
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
