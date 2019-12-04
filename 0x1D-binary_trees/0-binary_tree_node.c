#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 *
 * @parent: parent node
 * @value: value to assign in node
 *
 * Return: node pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
