/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:08:09 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:08:10 by stanislav        ###   ########.fr       */
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
