/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:07:31 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:07:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

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
