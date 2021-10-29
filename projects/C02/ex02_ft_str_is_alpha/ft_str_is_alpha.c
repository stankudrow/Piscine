/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:36:04 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 11:44:56 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(ft_islower(*str) || ft_isupper(*str)))
			return (0);
		str++;
	}
	return (1);
}
