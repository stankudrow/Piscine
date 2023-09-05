/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex05.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:35:32 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:45:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_list_push_strs(int size, char **strs);

size_t	ft_strlen(const char *str);
void	ft_putendl(const char *str);

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*node;

	if (argc > 1)
	{
		lst = ft_list_push_strs(argc - 1, argv + 1);
		if (lst)
		{
			node = lst;
			while (node)
			{
				ft_putendl((char *)(node->data));
				node = node->next;
			}
			ft_list_clear(lst, free);
		}
	}
}
