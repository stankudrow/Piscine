/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc11ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:01:41 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 12:01:42 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		*ft_map(int *tab, int length, int (*f)(int));

void	ft_putnbr_ln(int nbr)
{
	ft_putnbr(nbr);
	ft_putstr("\n");
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

int	square(int nbr)
{
	return (nbr * nbr);
}

int	main(int argc, char **argv)
{
	int	*numbers;
	int	*squares;
	int	length;

	if (argc == 2)
	{
		length = ft_atoi(argv[1]);
		if (length > 0)
		{
			numbers = get_int_range(length);
			ft_putstr("Numbers:\n");
			ft_foreach(numbers, length, ft_putnbr_ln);
			if (numbers)
			{
				squares = ft_map(numbers, length, square);
				if (squares)
				{
					ft_putstr("Squares:\n");
					ft_foreach(squares, length, ft_putnbr_ln);
					free(squares);
				}
				free(numbers);
			}
		}
	}
	return (0);
}
