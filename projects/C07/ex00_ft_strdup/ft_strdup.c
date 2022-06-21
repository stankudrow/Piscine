/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:27:58 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 15:29:06 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	char	*start;

	start = (char *)str;
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
	char	*dst;

	dst = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dst)
		dst = ft_strcpy(dst, src);
	return (dst);
}
