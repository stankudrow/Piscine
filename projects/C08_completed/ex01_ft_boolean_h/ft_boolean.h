/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 02:47:06 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/21 20:55:57 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(nbr)	!((nbr) % 2)
# define EVEN_MSG	"I have a pair number of arguments.\n"
# define ODD_MSG	"I have an impair number of arguments.\n"

typedef int	t_bool;

#endif
