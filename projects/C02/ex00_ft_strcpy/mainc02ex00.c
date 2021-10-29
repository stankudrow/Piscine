/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:10:42 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:40:16 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

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
	char	*dst;
	size_t	srclen;

	if (argc == 2)
	{
		srclen = ft_strlen(argv[1]);
		dst = (char *)malloc(srclen + 1);
		if (dst)
		{
			ft_strcpy(dst, argv[1]);
			ft_putstr("dst = ");
			ft_putstr(dst);
			ft_putstr("\n");
			free((void *)dst);
		}
	}
	return (0);
}
