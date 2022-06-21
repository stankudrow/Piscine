/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:07:39 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:07:39 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_islower(*str))
			return (0);
		str++;
	}
	return (1);
}
