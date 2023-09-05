/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:40:22 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 10:40:22 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*node;
	unsigned int	idx;

	node = begin_list;
	idx = 0;
	while (idx < nbr)
	{
		if (!node)
			break ;
		node = node->next;
		idx++;
	}
	return (node);
}
