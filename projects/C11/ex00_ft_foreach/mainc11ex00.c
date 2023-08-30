/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc11ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:01:49 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 12:01:49 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nbr);
int		ft_atoi(char *str);

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr_ln(int nbr)
{
	ft_putnbr(nbr);
	write(1, "\n", 1);
}

int	*get_int_range(int length)
{
	int	*numbers;
	int	counter;

	numbers = NULL;
	if (length > 0)
	{
		numbers = malloc(length * sizeof(int));
		if (numbers)
		{
			counter = 0;
			while (counter < length)
			{
				numbers[counter] = counter;
				counter++;
			}
		}
	}
	return (numbers);
}

int	main(int argc, char **argv)
{
	int	*numbers;
	int	length;

	if (argc == 2)
	{
		length = ft_atoi(argv[1]);
		if (length > 0)
		{
			numbers = get_int_range(length);
			if (numbers)
			{
				ft_foreach(numbers, length, ft_putnbr_ln);
				free(numbers);
			}
		}
	}
	return (0);
}
