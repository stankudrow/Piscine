/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:47:36 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:47:36 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

static size_t	ft_strlen(const char *str)
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

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_str_is_uppercase(argv[1]))
			ft_putstr("true");
		else
			ft_putstr("false");
		ft_putstr("\n");
	}
	return (0);
}
