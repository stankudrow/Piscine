/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:37 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 17:09:37 by stanislav        ###   ########.fr       */
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
