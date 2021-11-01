/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:48:08 by stanis            #+#    #+#             */
/*   Updated: 2021/11/01 10:51:12 by stanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

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

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (!size || (size < dlen))
		return (slen + size);
	ft_strlcpy(dst + dlen, src, size - dlen);
	return (dlen + slen);
}
