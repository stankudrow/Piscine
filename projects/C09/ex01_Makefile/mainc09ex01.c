/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc09ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 09:27:14 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/19 09:27:15 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// without -> [-Werror=implicit-function-declaration]
void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("You have managed to fire me.\n");
}

/*
StackOverflow: How to link to a static library in C?
https://stackoverflow.com/questions/1705961/how-to-link-to-a-static-library-in-c

Way 1:
gcc -Wall -Werror -Wextra mainc09ex01.c -L . -l ft -o <exec.out>

Way 2:
gcc -Wall -Werror -Wextra mainc09ex01.c libft.a -o <exec.out>

Tested on Ubuntu 22.04
*/
