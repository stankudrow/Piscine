/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:56:44 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 16:56:45 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
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
