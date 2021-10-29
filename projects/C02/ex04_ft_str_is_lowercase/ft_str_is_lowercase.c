/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:45:26 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:45:27 by stanis           ###   ########.fr       */
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
