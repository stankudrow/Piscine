/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:07:53 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:07:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_isupper(*str))
			return (0);
		str++;
	}
	return (1);
}
