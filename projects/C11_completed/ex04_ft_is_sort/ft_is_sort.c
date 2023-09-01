/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:39:04 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:40:09 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	cnt;

	cnt = 0;
	while (cnt < (length - 1))
	{
		if (f(tab[cnt + 1], tab[cnt]) < 0)
			return (0);
		cnt++;
	}
	return (1);
}
