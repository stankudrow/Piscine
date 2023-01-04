/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:29:41 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 15:29:42 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->left = NULL;
		btree->item = item;
		btree->right = NULL;
	}
	return (btree);
}
