/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:37:22 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:37:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	cnt;

	cnt = 0;
	while (tab[cnt])
	{
		if (f(tab[cnt]))
			return (1);
		cnt++;
	}
	return (0);
}
