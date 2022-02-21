/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:26:58 by stanislav         #+#    #+#             */
/*   Updated: 2021/09/14 18:26:59 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factor;
	int	product;

	product = 0;
	if (nb >= 0)
	{
		product = 1;
		if (nb > 1)
		{
			factor = 2;
			while (factor <= nb)
				product *= factor++;
		}
	}
	return (product);
}
