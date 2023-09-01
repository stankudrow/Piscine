/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc11ex07.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:18:56 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/01 13:18:56 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 1)
	{
		ft_advanced_sort_string_tab(argv + 1, ft_strcmp);
		index = 1;
		while (argv[index])
		{
			printf("%s\n", argv[index]);
			index++;
		}
	}
	return (0);
}
