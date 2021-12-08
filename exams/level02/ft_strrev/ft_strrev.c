/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:00:11 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 01:00:22 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strrev(char *s)
{
	char	*left;
	char	tmp;

	left = s;
	while (*s)
		s++;
	while (left < --s)
	{
		tmp = *left;
		*left++ = *s;
		*s = tmp;
	}
}