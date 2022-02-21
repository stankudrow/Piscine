/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:34:27 by stanislav         #+#    #+#             */
/*   Updated: 2021/09/14 18:34:28 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (ft_recursive_power(nb, power / 2) * \
			ft_recursive_power(nb, power / 2));
}
