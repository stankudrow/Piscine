/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex07.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:55:06 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:55:07 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

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
		str = ft_strupcase(argv[1]);
		ft_putstr("str = ");
		ft_putstr(str);
		ft_putstr("\n");
	}
	return (0);
}
