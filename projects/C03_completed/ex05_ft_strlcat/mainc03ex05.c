/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03ex05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:33:11 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:33:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dst, char *src, unsigned int size);

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

unsigned int	ft_atoui(char *str)
{
	unsigned int	num;

	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (num);
}

int	main(int argc, char **argv)
{
	unsigned int	dlen;
	unsigned int	slen;
	char			*dst;

	if (argc == 4)
	{
		dlen = ft_strlen(argv[1]);
		slen = ft_strlen(argv[2]);
		dst = malloc(sizeof(char) * (dlen + slen + 1));
		ft_strlcpy(dst, argv[1], dlen + 1);
		ft_strlcat(dst, argv[2], ft_atoui(argv[3]));
		ft_putstr("dest = ");
		ft_putstr(dst);
		ft_putstr("\n");
		free(dst);
	}
	return (0);
}
