/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc13ex01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:55:35 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 16:55:35 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*f)(void *));

static t_btree	*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = NULL;
		tree->item = item;
		tree->right = NULL;
	}
	return (tree);
}

static void	ft_print_tree_node(void *node)
{
	printf("item: %s\n", (char *)((t_btree *)node)->item);
}

int	main(void)
{
	t_btree	*tree;

	tree = btree_create_node("Root");
	if (tree)
	{
		tree->left = btree_create_node("Left");
		if (tree->left)
		{
			tree->right = btree_create_node("Right");
			if (tree->right)
			{
				btree_apply_prefix(tree, &ft_print_tree_node);
				free(tree->right);
			}
			free(tree->left);
		}
		free(tree);
	}
	return (0);
}
