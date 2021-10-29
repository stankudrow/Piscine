/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc02ex11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanis <student.21-school.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:48:30 by stanis            #+#    #+#             */
/*   Updated: 2021/10/29 12:48:30 by stanis           ###   ########.fr       */
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
