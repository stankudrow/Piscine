/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex09.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:01 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:09:01 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

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
	char	*str;

	str = (char *) 0;
	if (argc == 2)
	{
		str = ft_strcapitalize(argv[1]);
		ft_putstr("str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}
	return (0);
}
