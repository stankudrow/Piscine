/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 00:35:38 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/03 00:35:39 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	br;

	br = 1 << (__CHAR_BIT__ - 1);
	while (br)
	{
		if (octet & br)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		br >>= 1;
	}
}
