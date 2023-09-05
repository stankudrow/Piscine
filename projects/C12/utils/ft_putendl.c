/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:16:28 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:29:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_utils.h"

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	write(1, "\n", 1);
}
