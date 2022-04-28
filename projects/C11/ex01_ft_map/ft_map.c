/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:31:36 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:34:51 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*newtab;
	int	cnt;

	newtab = malloc(length * sizeof(int));
	if (!newtab)
		return (NULL);
	cnt = 0;
	while (cnt < length)
	{
		newtab[cnt] = (*f)(tab[cnt]);
		cnt++;
	}
	return (newtab);
}
