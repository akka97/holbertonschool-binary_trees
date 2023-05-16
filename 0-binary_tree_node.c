#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - addds a new node at the left or right pointer of parent
 * @parent: binary tree node where new node is inserted
 * @value: value to be stored in new node
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t) * 1);
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	if (parent != NULL)
	{
		node->parent = parent;
		if (parent->n > node->n)
			parent->left = node;
		else if (parent->n < node->n)
			parent->right = node;
	}
	return (node);
}
