/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:55:32 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 17:01:20 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/* also referred to as "preorder traversal" */
void	btree_apply_prefix(t_btree *root, void (*f)(void *))
{
	(*f)(root);
	if (root->left)
		btree_apply_prefix(root->left, f);
	if (root->right)
		btree_apply_prefix(root->right, f);
}
