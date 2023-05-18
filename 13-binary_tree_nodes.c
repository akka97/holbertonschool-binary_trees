#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the total numbers of nodes in a tree
 * @tree: where to count nodes
 * Return: 0 if tree is NULL or node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = binary_tree_nodes(tree->left);
	count_r = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (count_l + count_r + 1);
	return (count_l + count_r);
}
