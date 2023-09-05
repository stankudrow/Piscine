/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex07.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:51:53 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 14:51:53 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_atoi(const char *str);

t_list	*ft_create_elem(void *data);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*node;
	int		index;

	if (argc > 1)
	{
		lst = NULL;
		index = 2;
		while (index < (argc - 1))
		{
			ft_list_push_front(&lst, argv + index);
			index++;
		}
		node = ft_list_at(lst, ft_atoi(argv[1]));
		printf("node address = %p\n", node);
		if (node)
			printf("node data = %s\n", (char *)(node->data));
		ft_list_clear(lst, free);
	}
}
