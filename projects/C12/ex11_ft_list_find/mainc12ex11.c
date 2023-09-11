/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc12ex11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:47:33 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/11 14:52:34 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include "ft_list_utils.h"

t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
int		ft_strcmp(const char *s1, const char *s2);
void	ft_putendl(const char *str);

void	print_list_data(void *data)
{
	ft_putendl((char *)(data));
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*node;
	int		index;

	if (argc > 1)
	{
		lst = NULL;
		index = 2;
		while (index < argc)
		{
			ft_list_push_front(&lst, argv[index]);
			index++;
		}
		ft_list_reverse(&lst);
		printf("begin_list = %p\n", lst);
		node = ft_list_find(lst, argv[1], ft_strcmp);
		printf("node = %p\n", node);
		if (node)
			printf("data = %s\n", (char *)(node->data));
		ft_list_foreach(lst, print_list_data);
		ft_list_clear(lst, free);
	}
}
