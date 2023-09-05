/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:38:24 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 20:38:24 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*prev;

	prev = begin_list;
	while (begin_list)
	{
		begin_list = begin_list->next;
		free_fct(prev);
		prev = begin_list;
	}
}
