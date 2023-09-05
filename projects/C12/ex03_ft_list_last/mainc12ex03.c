/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:06:55 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:43:23 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	printf("lst = %p\n", ft_list_last(lst));
	lst = ft_create_elem("1");
	if (!lst)
		return (1);
	printf("lst = %p\n", ft_list_last(lst));
	lst->next = ft_create_elem("2");
	if (!lst->next)
		return (1);
	printf("lst = %p\n", ft_list_last(lst));
	ft_list_clear(lst, free);
	return (0);
}
