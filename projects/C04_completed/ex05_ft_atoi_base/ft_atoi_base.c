/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 01:56:42 by stanislav         #+#    #+#             */
/*   Updated: 2022/01/22 01:56:42 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

bool	ft_is_valid_base(const char *base)
{
	size_t	blen;
	size_t	bci;
	size_t	bcj;

	blen = ft_strlen(base);
	if (blen < 2 || blen > 36)
		return (false);
	bci = 0;
	while (bci < blen)
	{
		if (!(base[bci] >= '0' && base[bci] <= '9') && \
			!(base[bci] >= 'A' && base[bci] <= 'Z') && \
			!(base[bci] >= 'a' && base[bci] <= 'z'))
			return (false);
		bcj = 0;
		while (bcj < bci)
		{
			if (base[bcj] == base[bci])
				return (false);
			bcj++;
		}
		bci++;
	}
	return (true);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = c;
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	if (*s == chr)
		return ((char *)s);
	return (NULL);
}

int	ft_atoi_base(char *str, char *base)
{
	int		num;
	int		sign;
	int		nbase;
	char	*chr;

	sign = 1;
	num = 0;
	if (!ft_is_valid_base(base))
		return (0);
	nbase = ft_strlen(base);
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && ft_strchr(base, *str))
	{
		chr = ft_strchr(base, *str);
		num = nbase * num + (chr - base) % nbase;
		str++;
	}
	return (sign * num);
}
