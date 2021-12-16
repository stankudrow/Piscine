/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:01:23 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/17 01:01:23 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	sl;
	size_t	rl;

	sl = 0;
	while (s[sl])
	{
		rl = 0;
		while (reject[rl])
		{
			if (s[sl] == reject[rl])
				return (sl);
			rl++;
		}
		sl++;
	}
	return (sl);
}
