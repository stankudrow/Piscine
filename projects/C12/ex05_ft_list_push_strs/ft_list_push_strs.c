/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:26:40 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:26:40 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*lst;

	lst = NULL;
	while (--size > -1)
		ft_list_push_front(&lst, strs[size]);
	return (lst);
}
