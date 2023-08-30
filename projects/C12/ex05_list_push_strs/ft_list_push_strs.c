/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:35:36 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 20:35:36 by stanislav        ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*lst;

	lst = NULL;
	while (--size > -1)
		ft_list_push_front(&lst, strs[size]);
	return (lst);
}
