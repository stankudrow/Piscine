/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:44:15 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 15:44:15 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*start;

	start = dst;
	while (*src && n--)
		*dst++ = *src++;
	while (*src++)
		*dst++ = '\0';
	return (start);
}

char	*ft_strjoin_sep(const char *dst, const char *src, const char *sep)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	sep_len;
	char	*newstr;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	sep_len = ft_strlen(sep);
	newstr = malloc(sizeof(char) * (dst_len + src_len + sep_len + 1));
	if (!newstr)
		return (NULL);
	ft_strncpy(newstr, dst, dst_len);
	ft_strncpy(newstr + dst_len, src, src_len);
	ft_strncpy(newstr + dst_len + src_len, sep, sep_len);
	newstr[dst_len + src_len + sep_len] = '\0';
	return (newstr);
}

/* a hack included */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		cnt;
	char	*tmp;

	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	*str = '\0';
	cnt = 0;
	size--;
	while (cnt <= size)
	{
		tmp = ft_strjoin_sep(str, strs[cnt], sep);
		if (!tmp)
		{
			free(str);
			return (NULL);
		}
		free(str);
		str = tmp;
		cnt++;
	}
	if (cnt > 0)
		str[ft_strlen(str) - ft_strlen(sep)] = '\0';
	return (str);
}
