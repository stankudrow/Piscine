/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:37:39 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/01 12:25:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	index;
	int	if_count;

	if_count = 0;
	index = 0;
	while (tab[index])
	{
		if ((*f)(tab[index]))
			if_count++;
		index++;
	}
	return (if_count);
}
