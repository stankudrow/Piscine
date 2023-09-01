/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 10:15:29 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 10:21:11 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

static int	(*get_func(char op))(int x, int y)
{
	if (op == '+')
		return (ft_sum);
	if (op == '-')
		return (ft_sub);
	if (op == '*')
		return (ft_mul);
	if (op == '/')
		return (ft_div);
	if (op == '%')
		return (ft_mod);
	return (NULL);
}

static int	op_is_valid(char op)
{
	if (op == '+')
		return (1);
	if (op == '-')
		return (1);
	if (op == '*')
		return (1);
	if (op == '/')
		return (1);
	if (op == '%')
		return (1);
	return (0);
}

static void	operate(int n1, char op, int n2)
{
	int	res;
	int	(*func)(int, int);

	if (!op_is_valid(op))
		ft_putendl("0");
	else
	{
		func = get_func(op);
		if (op == '/' && n2 == 0)
		{
			ft_putendl("Stop: division by zero");
			return ;
		}
		if (op == '%' && n2 == 0)
		{
			ft_putendl("Stop: modulo by zero");
			return ;
		}
		res = func(n1, n2);
		ft_putnbr(res);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;

	if (argc != 4)
		return (1);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	operate(num1, *argv[2], num2);
	return (0);
}
