/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:02:12 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/05 11:29:01 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_list_utils.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

size_t	ft_strlen(const char *str);
void	ft_putendl(const char *str);

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_list_push_front(&lst, "Last!");
	ft_list_push_front(&lst, "First!");
	ft_putendl(lst->data);
	ft_putendl(lst->next->data);
	free(lst->next);
	free(lst);
	return (0);
}
