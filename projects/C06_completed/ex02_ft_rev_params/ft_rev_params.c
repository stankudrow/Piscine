/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:57:19 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 16:57:19 by stanislav        ###   ########.fr       */
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
	if (argc > 1)
	{
		while (--argc)
		{
			ft_putstr(argv[argc]);
			ft_putstr("\n");
		}
	}
	return (0);
}
