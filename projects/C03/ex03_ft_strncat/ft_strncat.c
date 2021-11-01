/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:22:10 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 10:22:10 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dst, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	cnt;

	start = dst;
	while (*dst)
		dst++;
	cnt = 0;
	while ((cnt < nb) && *src)
	{
		*dst++ = *src++;
		cnt++;
	}
	*dst = '\0';
	return (start);
}
