/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:47:44 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:47:46 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int		a;
	int		b;
	int		c;
	char	op;

	if (ac == 4)
	{
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		c = 0;
		if (op == '+')
			c = a + b;
		if (op == '-')
			c = a - b;
		if (op == '*')
			c = a * b;
		if (op == '/')
			c = a / b;
		if (op == '%')
			c = a % b;
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
