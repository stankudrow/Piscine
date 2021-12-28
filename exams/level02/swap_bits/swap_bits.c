/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:57:28 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/28 23:57:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a well-known solution
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
