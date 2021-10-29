/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:54:35 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 12:01:37 by stanis           ###   ########.fr       */
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
