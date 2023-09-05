/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:25:54 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:25:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*last;

	if (begin_list)
	{
		node = ft_create_elem(data);
		if (node)
		{
			last = ft_list_last(*begin_list);
			if (last)
				last->next = node;
			else
				*begin_list = node;
		}
	}
}
