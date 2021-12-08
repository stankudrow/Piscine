/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 00:34:25 by stanislav         #+#    #+#             */
/*   Updated: 2021/12/09 00:34:25 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static void	ft_print_line(int length, char lborder, char rborder, char filler)
{
	int	letter;

	if (length > 0)
	{
		ft_putchar(lborder);
		letter = 2;
		while (letter < length)
		{
			ft_putchar(filler);
			letter++;
		}
		if (letter == length)
			ft_putchar(rborder);
	}
	ft_putchar('\n');
}

void	rush(int length, int width)
{
	int	line;

	if ((length > 0) && (width > 0))
	{
		ft_print_line(length, 'A', 'A', 'B');
		line = 2;
		while (line < width)
		{
			ft_print_line(length, 'B', 'B', ' ');
			line++;
		}
		if (line == width)
			ft_print_line(length, 'C', 'C', 'B');
	}
}
