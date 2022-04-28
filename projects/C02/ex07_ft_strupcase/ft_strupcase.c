/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:53:12 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:53:12 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_toupper(char c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
	return (start);
}
