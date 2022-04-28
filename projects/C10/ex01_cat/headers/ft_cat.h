/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 08:12:39 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 08:21:31 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/errno.h>
# include <libgen.h>
# include <string.h>

# define BUF_SIZE 4096

void	ft_display_error(char *str);
void	ft_cat_error(char *progname, char *entry, char *strerror);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(const char *str);

#endif
