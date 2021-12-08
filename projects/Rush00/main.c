/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:34:18 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:34:18 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int length, int width);

static void	ft_skip(const char **nptr, short int *sign)
{
	while ((**nptr > 8 && **nptr < 14) || **nptr == 32)
		(*nptr)++;
	if (**nptr == '-' || **nptr == '+')
	{
		if (**nptr == '-')
			*sign = -1;
		(*nptr)++;
	}
	while (**nptr == '0')
		(*nptr)++;
}

// from libft
int	ft_atoi(const char *nptr)
{
	long	nbr;
	short	sign;

	sign = 1;
	nbr = 0;
	ft_skip(&nptr, &sign);
	while (*nptr >= '0' && *nptr <= '9')
	{
		if ((10 * nbr + (*nptr - '0')) < nbr)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		nbr = 10 * nbr + (*nptr - '0');
		nptr++;
	}
	return (sign * (int)nbr);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		rush(0, 0);
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
