/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:02:12 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/30 19:02:13 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_putstrln(const char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_list_push_front(&lst, "Last!");
	ft_list_push_front(&lst, "First!");
	ft_putstrln(lst->data);
	ft_putstrln(lst->next->data);
	free(lst->next);
	free(lst);
	return (0);
}
