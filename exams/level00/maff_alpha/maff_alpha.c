/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:29:24 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 11:29:25 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	letter;
	int		sign;

	letter = 'a';
	sign = 1;
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		sign = -sign;
		letter += sign * 32;
		letter++;
	}
	return (0);
}
