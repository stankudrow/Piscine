/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc13ex00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:29:28 by stanislav         #+#    #+#             */
/*   Updated: 2022/06/22 15:29:28 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

int	main(void)
{
	t_btree	*tree;

	tree = btree_create_node("Value");
	if (tree)
	{
		printf("left node: %s\n", (char *)tree->left);
		printf("item: %s\n", (char *)tree->item);
		printf("right node: %s\n", (char *)tree->right);
		free(tree);
	}
	return (0);
}
