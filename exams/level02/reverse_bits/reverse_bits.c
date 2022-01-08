/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:32:55 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/08 23:32:56 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	roctet;
	unsigned char	br;

	br = 0;
	while (br < __CHAR_BIT__)
	{
		if (octet & (1 << br))
			roctet |= 1 << ((__CHAR_BIT__ - 1) - br);
		br++;
	}
	return (roctet);
}
