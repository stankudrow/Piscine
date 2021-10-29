/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:48:08 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:48:08 by stanis           ###   ########.fr       */
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
