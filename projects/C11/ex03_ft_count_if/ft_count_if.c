/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:37:39 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:38:40 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	icnt;
	int	rnzcnt;

	rnzcnt = 0;
	icnt = 0;
	while (tab[icnt])
	{
		if ((*f)(tab[icnt]) != 0)
			rnzcnt++;
		icnt++;
	}
	return (rnzcnt);
}
