/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:29:36 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 11:29:37 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	letter;
	int		sign;

	letter = 'z';
	sign = 1;
	while (letter != 96)
	{
		write(1, &letter, 1);
		sign = -sign;
		letter += sign * 32;
		letter--;
	}
	return (0);
}
