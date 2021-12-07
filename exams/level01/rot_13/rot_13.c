/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:57:43 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/07 23:57:52 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

static int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	char	*arg;
	char	chr;

	if (ac == 2)
	{
		arg = av[1];
		while (*arg)
		{
			chr = *arg;
			if (ft_isupper(chr))
				chr = 'A' + (chr + 13 - 'A') % 26;
			if (ft_islower(chr))
				chr = 'a' + (chr + 13 - 'a') % 26;
			ft_putchar(chr);
			arg++;
		}
	}
	ft_putchar('\n');
	return (0);
}
