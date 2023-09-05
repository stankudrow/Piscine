#include <stdio.h>
#include "ft_list.h"
#include "ft_list_utils.h"

t_list	*ft_create_elem(void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_reverse(t_list **begin_list);

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
							void *data_ref, int (*cmp)());

int		ft_strcmp(const char *s1, const char *s2);
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
		ft_list_foreach_if(lst, print_list_data, lst->data, ft_strcmp);
		ft_list_clear(lst, free);
	}
}
