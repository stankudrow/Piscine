/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 16:58:05 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 16:58:05 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

static int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

static void	ft_swap(char **x, char **y)
{
	char	*temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

// shell sort (improved version of insertion sort)
static void	ft_sort_params(char **arr, unsigned int len)
{
	unsigned int	gap;
	unsigned int	i;
	unsigned int	j;

	gap = len / 2;
	while (gap)
	{
		i = 0;
		while (i < len)
		{
			j = i + gap;
			while (j < len)
			{
				if (ft_strcmp(arr[i], arr[j]) > 0)
					ft_swap(&arr[i], &arr[j]);
				j += gap;
			}
			i++;
		}
		gap /= 2;
	}
}

int	main(int argc, char **argv)
{
	int	cnt;

	if (argc > 1)
	{
		cnt = 1;
		ft_sort_params(argv + 1, argc - 1);
		while (cnt < argc)
		{
			ft_putstr(argv[cnt]);
			ft_putstr("\n");
			cnt++;
		}
	}
	return (0);
}
