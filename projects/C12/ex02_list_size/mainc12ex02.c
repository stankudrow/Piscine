/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:06:55 by stanislav         #+#    #+#             */
/*   Updated: 2022/05/03 13:08:34 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

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

void	ft_list_clear(t_list *begin_list)
{
	t_list	*node;

	while (begin_list)
	{
		node = begin_list;
		begin_list = begin_list->next;
		free(node);
	}
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	printf("size0 = %d\n", ft_list_size(lst));
	lst = ft_create_elem("1");
	if (!lst)
		return (1);
	printf("size1 = %d\n", ft_list_size(lst));
	lst->next = ft_create_elem("2");
	if (!lst->next)
		return (1);
	printf("size2 = %d\n", ft_list_size(lst));
	ft_list_clear(lst);
	lst = NULL;
	return (0);
}
