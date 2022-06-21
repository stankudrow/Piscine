/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:08:29 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:08:29 by stanislav        ###   ########.fr       */
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
