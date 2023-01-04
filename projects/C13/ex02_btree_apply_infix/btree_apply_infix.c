/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:59:53 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 17:00:58 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/* also referred to as "inorder traversal" */
void	btree_apply_infix(t_btree *root, void (*f)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, f);
	(*f)(root);
	if (root->right)
		btree_apply_infix(root->right, f);
}
