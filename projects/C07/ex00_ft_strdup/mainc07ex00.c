/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc07ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:28:12 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 15:28:12 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(char *src);

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

static void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -10)
			ft_putnbr(nbr / -10);
		ft_putchar(-(nbr % 10) + '0');
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

int	main(int argc, char **argv)
{
	int		ac;
	char	*dst;

	if (argc > 1)
	{
		dst = NULL;
		ac = 1;
		while (ac < argc)
		{
			dst = ft_strdup(argv[ac]);
			ft_putstr("argv[");
			ft_putnbr(ac);
			ft_putstr("] = ");
			ft_putstr(dst);
			ft_putstr("\n");
			free(dst);
			ac++;
		}
	}
}
