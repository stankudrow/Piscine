/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc11ex06.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:12:31 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/01 13:12:32 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 1)
	{
		ft_sort_string_tab(argv + 1);
		index = 1;
		while (argv[index])
		{
			printf("%s\n", argv[index]);
			index++;
		}
	}
	return (0);
}
