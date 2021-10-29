/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:03:17 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 12:04:05 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_tolower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
	return (start);
}
