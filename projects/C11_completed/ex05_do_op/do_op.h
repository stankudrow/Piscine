/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:33:17 by stanislav         #+#    #+#             */
/*   Updated: 2022/04/28 10:23:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_sum(int n1, int n2);
int		ft_sub(int n1, int n2);
int		ft_mul(int n1, int n2);
int		ft_div(int n1, int n2);
int		ft_mod(int n1, int n2);

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
size_t	ft_strlen(const char *str);
void	ft_putstr(const char *str);
void	ft_putendl(const char *str);

int		ft_atoi(const char *str);

#endif