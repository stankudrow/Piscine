/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:07:56 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 10:07:56 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '6')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '9')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, digits, 3);
				write(1, ", ", 2);
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
	write(1, "789", 3);
}
