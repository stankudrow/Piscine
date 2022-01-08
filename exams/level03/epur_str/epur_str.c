/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:53:28 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/08 22:53:29 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isspace(int c)
{
	return ((c > 8 && c < 14) || c == 32);
}

int	main(int ac, char **av)
{
	char	*str;
	char	nxt;

	if (ac == 2)
	{
		str = av[1];
		while (*str && ft_isspace(*str))
			str++;
		while (*str)
		{
			nxt = *(str + 1);
			if (!(ft_isspace(*str) && (ft_isspace(nxt) || !nxt)))
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
