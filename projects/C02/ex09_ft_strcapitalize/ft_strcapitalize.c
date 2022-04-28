/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:53:43 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:53:43 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalnum(char c)
{
	return ((c >= 'A' && c <= 'Z') || \
			(c >= 'a' && c <= 'z') || \
			(c >= '0' && c <= '9'));
}

static int	ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	char	prev;

	start = str;
	prev = ' ';
	while (*str)
	{
		if (ft_isupper(*str))
			*str += 32;
		if (!ft_isalnum(prev) && ft_islower(*str))
			*str -= 32;
		prev = *str;
		str++;
	}
	return (start);
}
