/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:24:34 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:15:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*dest;

	dest = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dest);
}

static char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (dst)
		return (ft_strcpy(dst, src));
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			argc;
	char		*argv;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab)
	{
		argc = 0;
		while (argc < ac)
		{
			argv = av[argc];
			tab[argc].size = ft_strlen(argv);
			tab[argc].str = argv;
			tab[argc].copy = ft_strdup(argv);
			argc++;
		}
		tab[argc].str = NULL;
	}
	return (tab);
}
