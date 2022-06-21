/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:08:42 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:08:42 by stanislav        ###   ########.fr       */
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
