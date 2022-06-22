/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_sufffix.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:04:17 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 17:04:58 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/* also referred to as "postorder traversal" */
void	btree_apply_suffix(t_btree *root, void (*f)(void *))
{
	if (root->left)
		btree_apply_suffix(root->left, f);
	if (root->right)
		btree_apply_suffix(root->right, f);
	(*f)(root);
}
