/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:32:20 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:32:20 by stanislav        ###   ########.fr       */
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
