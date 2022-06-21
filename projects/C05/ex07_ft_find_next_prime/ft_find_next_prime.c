/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:20:56 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 22:20:56 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* See the previous exercise.*/

typedef union u_conv
{
	float	f;
	int		i;
}	t_conv;

/*
** https://en.wikipedia.org/wiki/Fast_inverse_square_root
** https://www.youtube.com/watch?v=p8u_k2LIZyo
** https://www.youtube.com/watch?v=4nShTeUEJIQ
*/
static float	ft_qrsqrt(float number)
{
	t_conv	conv;

	conv.f = number;
	conv.i = 0x5f3759df - (conv.i >> 1);
	conv.f *= 1.5f - (number * 0.5f) * conv.f * conv.f;
	return (conv.f);
}

static int	ft_is_prime(int nb)
{
	int	num;
	int	sqrt;

	if (nb > 1)
	{
		if (nb == 2)
			return (1);
		if (nb & 1)
		{
			num = 3;
			sqrt = (int)(1. / ft_qrsqrt(nb));
			while (num <= sqrt)
			{
				if (!(nb % num))
					return (0);
				num += 2;
			}
			return (1);
		}
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	if (nb < 0)
		return (-1);
	return (nb);
}
