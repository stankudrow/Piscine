/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex06.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:35:32 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:45:54 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

int	main(int argc, char **argv)
{
	t_list	*lst;
	int		index;

	if (argc > 1)
	{
		lst = NULL;
		index = 1;
		while (index < (argc - 1))
		{
			ft_list_push_front(&lst, argv + index);
			index++;
		}
		ft_list_clear(lst, free);
	}
}
