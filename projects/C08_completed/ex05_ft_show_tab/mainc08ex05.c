/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc08ex05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 02:46:44 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:13:49 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

size_t	ft_strlen(const char *str);

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

void	ft_free_tab(struct s_stock_str *tab)
{
	int	cnt;

	cnt = 0;
	while (tab[cnt].str)
	{
		free(tab[cnt].copy);
		cnt++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	if (argc > 1)
	{
		tab = ft_strs_to_tab(argc, argv);
		ft_show_tab(tab);
		ft_free_tab(tab);
	}
	return (0);
}
