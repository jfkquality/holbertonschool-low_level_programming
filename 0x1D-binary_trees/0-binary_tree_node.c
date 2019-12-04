#include "binary_trees.h"

/**
 * binary_tree_t - Entry point
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if ((node = malloc(sizeof(*node))) == NULL)
		return NULL;
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return(node);
}
