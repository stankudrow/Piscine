/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:28:20 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/19 12:14:18 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

static void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static bool	ft_is_valid_base(const char *base)
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

static void	ft_putnbr_nbase(int nbr, char *base_set, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -base)
			ft_putnbr_nbase(nbr / -base, base_set, base);
		ft_putchar(base_set[-(nbr % base)]);
	}
	else
	{
		if (nbr >= base)
			ft_putnbr_nbase(nbr / base, base_set, base);
		ft_putchar(base_set[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_is_valid_base(base))
		ft_putnbr_nbase(nbr, base, ft_strlen(base));
}
