/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:10 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:09:10 by stanislav        ###   ########.fr       */
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
