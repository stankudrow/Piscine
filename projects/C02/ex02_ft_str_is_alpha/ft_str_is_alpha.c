/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:07:10 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:07:10 by stanislav        ###   ########.fr       */
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
