/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:42:20 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/07 01:47:11 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

static void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

// pointers comparison is potentially an undefined behaviour
static void	ft_revstr(char *str)
{
	char	*start;
	char	tmpchr;

	start = str;
	while (*str)
		str++;
	str--;
	while (start < str)
	{
		tmpchr = *start;
		*start = *str;
		*str = tmpchr;
		start++;
		str--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_revstr(av[1]);
		ft_putstr(av[1]);
	}
	ft_putstr("\n");
	return (0);
}
