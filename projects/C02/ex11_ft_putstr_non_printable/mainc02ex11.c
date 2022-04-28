/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:54:27 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/08 23:54:27 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	*str;

	str = "\aCoucou!\tComment vas  tu?\nSi bien, d'accord.\b";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	return (0);
}
