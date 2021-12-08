/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:58:43 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:58:44 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ma;
	unsigned char	chr;

	ma = s;
	chr = c;
	while (n--)
		*ma++ = chr;
	return (s);
}

// thanks to @jbelinda and @thera for insights
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	total;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	if (size > (size_t)-1 / nmemb)
		return (NULL);
	total = nmemb * size;
	mem = malloc(total);
	if (mem)
		ft_memset(mem, 0, total);
	return (mem);
}
// ft_bzero(mem, total); -> ft_memset(mem, 0, total);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src)
		return (dst);
	dest = dst;
	source = src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src)
		return (dst);
	dest = dst;
	source = src;
	if (src < dst)
		while (n--)
			dest[n] = source[n];
	if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}

char	*ft_strdup(const char *s)
{
	void	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (slen == (size_t)-1)
		return (NULL);
	str = ft_calloc(slen + 1, sizeof(char));
	if (str)
		ft_memmove(str, s, slen + 1);
	return (str);
}
// ft_strlcpy(str, s, len + 1); -> ft_memmove(str, s, len + 1);