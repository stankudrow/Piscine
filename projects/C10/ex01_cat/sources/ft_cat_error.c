/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:13:11 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:13:12 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_display_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_cat_error(char *progname, char *entry, char *strerror)
{
	ft_display_error(progname);
	ft_display_error(": ");
	ft_display_error(entry);
	ft_display_error(": ");
	ft_display_error(strerror);
	ft_display_error("\n");
}
