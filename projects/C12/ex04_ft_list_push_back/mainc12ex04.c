/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:37:00 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:44:22 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

size_t	ft_strlen(const char *str);
void	ft_putendl(const char *str);

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_list_push_back(&lst, "First!");
	ft_list_push_back(&lst, "Last!");
	ft_putendl(lst->data);
	ft_putendl(lst->next->data);
	free(lst->next);
	free(lst);
	return (0);
}
