/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex08.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:38:57 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 15:38:57 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	ft_putendl(const char *str);

void	print_list_data(void *data)
{
	ft_putendl((char *)(data));
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	int		index;

	if (argc > 1)
	{
		lst = NULL;
		index = 1;
		while (index < argc)
		{
			ft_list_push_front(&lst, argv[index]);
			index++;
		}
		ft_list_reverse(&lst);
		ft_list_foreach(lst, print_list_data);
		ft_list_clear(lst, free);
	}
}
