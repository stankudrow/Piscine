/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:32:14 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:32:14 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *dst, char *src);

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

int	main(int argc, char **argv)
{
	unsigned int	len;
	char			*dst;

	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		len += ft_strlen(argv[2]);
		dst = malloc(sizeof(char) * (len + 1));
		ft_strcpy(dst, argv[1]);
		ft_strcat(dst, argv[2]);
		ft_putstr("dest = ");
		ft_putstr(dst);
		ft_putstr("\n");
		free(dst);
	}
	return (0);
}
