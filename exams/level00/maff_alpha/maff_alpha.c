/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:08:31 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/07 01:08:31 by stanislav        ###   ########.fr       */
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
