#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: tree to find size
 * Return: 0 if tree is NULL or tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = binary_tree_size(tree->left);
	count_r = binary_tree_size(tree->right);
	return (count_l + count_r + 1);
}
