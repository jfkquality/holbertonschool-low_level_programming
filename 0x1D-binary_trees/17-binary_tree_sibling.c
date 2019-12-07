#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node of the tree to traverse
 *
 * Return: nothing
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);
	if (node->parent->left && node->parent->right)
	{
		if (node->n == node->parent->left->n)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
