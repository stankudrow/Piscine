/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:22:55 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 10:27:23 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strncat(char *dst, char *src, unsigned int nb);

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strcpy(char *dst, char *src)
{
	char	*start;

	start = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (start);
}

unsigned int	ft_atoui(char *str)
{
	unsigned int	num;

	num = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '+')
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
	unsigned int	len;
	char			*dst;

	if (argc == 4)
	{
		len = ft_strlen(argv[1]);
		len += ft_strlen(argv[2]);
		dst = malloc(sizeof(char) * (len + 1));
		ft_strcpy(dst, argv[1]);
		dst = ft_strncat(dst, argv[2], ft_atoui(argv[3]));
		ft_putstr("dest = ");
		ft_putstr(dst);
		ft_putstr("\n");
		free(dst);
	}
	return (0);
}
