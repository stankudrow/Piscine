/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:56:51 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 10:57:02 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

// selection sort algorithm
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	key;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			key = i;
			j = i + 1;
			while (j < size)
			{
				if (tab[j] < tab[key])
					key = j;
				j++;
			}
			ft_swap(&tab[i], &tab[key]);
			i++;
		}
	}
}
