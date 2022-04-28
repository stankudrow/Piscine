/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 07:35:51 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:08:01 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_check_input_params(int argc)
{
	if (argc == 1)
	{
		ft_display_error("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_display_error("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		buflen;
	char	buf[BUF_SIZE + 1];

	if (ft_check_input_params(argc))
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (1);
		buflen = -1;
		while (buflen)
		{
			buflen = read(fd, buf, BUF_SIZE);
			if (buflen < 0)
			{
				ft_display_error("Cannot read file.\n");
				break ;
			}
			buf[buflen] = '\0';
			write(1, buf, buflen + 1);
		}
		close(fd);
	}
	return (0);
}
