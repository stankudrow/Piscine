/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:54:04 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:54:04 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);

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

static int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (sign * num);
}

int	main(int argc, char **argv)
{
	char	*dst;
	size_t	srclen;

	if (argc == 3)
	{
		srclen = ft_strlen(argv[1]);
		dst = (char *)malloc(srclen + 1);
		if (dst)
		{
			ft_strlcpy(dst, argv[1], ft_atoi(argv[2]));
			ft_putstr("dst = ");
			ft_putstr(dst);
			ft_putstr("\n");
			free((void *)dst);
		}
	}
	return (0);
}
