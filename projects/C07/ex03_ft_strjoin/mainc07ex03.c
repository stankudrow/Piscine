/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc07ex03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:44:09 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 15:44:09 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(int size, char **strs, char *sep);

static void	ft_putstr(const char *str)
{
	write(1, str, ft_strlen(str));
}

/*
	./a.out sep str1 str2 ... str_n
	e. g. 1
	./a.out "###" "Lol" Coucou Titi
	res -> "Lol###Coucou###Titi"
	e. g. 2
	./a.out "###" "Lol"
	res -> "Lol"
	e. g. 3
	./a.out "###""
	res -> ""
*/
int	main(int argc, char **argv)
{
	char	*str_joined;

	if (argc > 2)
	{
		str_joined = ft_strjoin(argc - 2, argv + 2, argv[1]);
		ft_putstr(str_joined);
		free(str_joined);
	}
	ft_putstr("\n");
	return (0);
}
