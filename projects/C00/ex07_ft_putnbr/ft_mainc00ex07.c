/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mainc00ex07.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:45:56 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:45:57 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (sign * num);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
