/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:49:40 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:49:40 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;

	if (size > 0)
	{
		first = 0;
		last = size - 1;
		while (first < last)
		{
			ft_swap(&tab[first], &tab[last]);
			first++;
			last--;
		}
	}
}
