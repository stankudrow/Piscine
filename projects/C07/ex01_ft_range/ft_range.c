/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:20:04 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 14:20:04 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	span;
	int	cnt;

	range = NULL;
	if (min < max)
	{
		span = max - min;
		range = malloc(sizeof(int) * span);
		if (range)
		{
			cnt = 0;
			while (cnt < span)
			{
				range[cnt] = min + cnt;
				cnt++;
			}
		}
	}
	return (range);
}
