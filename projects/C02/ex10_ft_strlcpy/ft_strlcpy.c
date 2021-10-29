/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:07:58 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 12:07:58 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	slen;

	slen = 0;
	if (size)
	{
		size -= 1;
		while (src[slen] && (slen < size))
		{
			dst[slen] = src[slen];
			slen++;
		}
		dst[slen] = '\0';
	}
	while (src[slen])
		slen++;
	return (slen);
}
