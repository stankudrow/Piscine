/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:27:59 by stanislav         #+#    #+#             */
/*   Updated: 2021/09/23 23:48:16 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
float	ft_qrsqrt(float number)
{
	t_conv	conv;

	conv.f = number;
	conv.i = 0x5f3759df - (conv.i >> 1);
	conv.f *= 1.5f - (number * 0.5f) * conv.f * conv.f;
	return (conv.f);
}

int	ft_is_prime(int nb)
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
