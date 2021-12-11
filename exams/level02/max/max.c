/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:41:19 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/12 01:41:30 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	maxel;
	int	ind;

	maxel = tab[0];
	ind = 1;
	while (ind < len)
	{
		if (tab[ind] > maxel)
			maxel = tab[ind];
		ind++;
	}
	return (maxel);
}
