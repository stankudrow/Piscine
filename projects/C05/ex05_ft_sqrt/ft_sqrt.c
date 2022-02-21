/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <stanislav@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:05:00 by stanislav         #+#    #+#             */
/*   Updated: 2021/09/17 00:05:01 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;
	int	square;

	if (nb > 0)
	{
		root = 1;
		square = 1;
		while ((square > 0))
		{
			square = root * root;
			if (square == nb)
				return (root);
			root++;
		}
	}
	return (0);
}
