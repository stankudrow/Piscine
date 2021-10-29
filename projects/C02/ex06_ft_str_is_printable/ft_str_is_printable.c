/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:16:58 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 12:16:58 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// man isprint
int	ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
