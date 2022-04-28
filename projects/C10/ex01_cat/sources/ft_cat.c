/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:13:35 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:13:57 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_cat(int fd)
{
	int		buflen;
	char	buf[BUF_SIZE + 1];

	buflen = -1;
	while (buflen)
	{
		buflen = read(fd, buf, BUF_SIZE);
		if (buflen == 0 && fd == 0)
			return (0);
		if (buflen == -1)
			return (errno);
		buf[buflen] = '\0';
		write(1, buf, buflen + 1);
	}
	return (0);
}

void	ft_cat_file(char *progname, char *fname)
{
	int		fd;

	fd = open(fname, O_RDONLY);
	if (fd < 0)
		ft_cat_error(progname, fname, strerror(errno));
	else
	{
		if (ft_cat(fd) != 0)
			ft_cat_error(progname, fname, strerror(errno));
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	char	*progname;
	int		fcnt;

	progname = basename(argv[0]);
	if (argc == 1)
		ft_cat(0);
	else
	{
		if (argc == 2 && (!ft_strcmp(argv[1], "-") || \
							!ft_strcmp(argv[1], "--")))
			ft_cat(0);
		else
		{
			fcnt = 1;
			while (fcnt < argc)
			{
				if (!ft_strcmp(argv[fcnt], "-"))
					ft_cat(0);
				else
					ft_cat_file(progname, argv[fcnt]);
				fcnt++;
			}
		}
	}
	return (0);
}
