/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:25:54 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 14:25:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arange;
	int	span;
	int	cnt;

	arange = NULL;
	cnt = -1;
	if (min < max)
	{
		span = max - min;
		arange = malloc(sizeof(int) * span);
		if (arange)
		{
			cnt = 0;
			while (cnt < span)
			{
				arange[cnt] = min + cnt;
				cnt++;
			}
			*range = arange;
		}
	}
	else
		return (0);
	return (cnt);
}
