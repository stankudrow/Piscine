/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:48:28 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 18:48:28 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (begin_list)
	{
		node = ft_create_elem(data);
		if (node)
		{
			node->next = *begin_list;
			*begin_list = node;
		}
	}
}
