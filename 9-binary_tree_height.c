#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - finds the length of the longest branch of the tree
 * @tree: parent node of the tree
 * Return: 0 if tree is NULL otherwise the length of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || tree->left == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	left_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
