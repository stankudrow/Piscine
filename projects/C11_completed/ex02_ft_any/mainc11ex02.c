/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc11ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:23:16 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/01 12:25:36 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *));

// the Norm sucks
int	starts_with_a(char *str)
{
	return (str[0] == 'A');
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("Starting with 'A'\n");
		printf("If any? %d\n", ft_any(argv + 1, starts_with_a));
	}
	return (0);
}
