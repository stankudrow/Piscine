/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 21:42:06 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/18 21:42:09 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

char	*ft_strcpy(char *dst, char *src)
{
	char	*start;

	start = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (start);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst)
		dst = ft_strcpy(dst, src);
	return (dst);
}
