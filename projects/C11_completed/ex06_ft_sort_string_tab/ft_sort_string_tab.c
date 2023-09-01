/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:12:41 by stanislav         #+#    #+#             */
/*   Updated: 2023/09/01 13:12:41 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strtab_len(char **tab)
{
	int	length;

	length = 0;
	while (tab[length])
		length++;
	return (length);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	length;
	int	swapped;

	length = ft_strtab_len(tab);
	i = 0;
	while (i < (length - 1))
	{
		j = i + 1;
		swapped = 0;
		while (j < (length - 1))
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swap(tab + i, tab + j);
				swapped = 1;
			}
			j++;
		}
		if (!swapped)
			break ;
		i++;
	}
}
