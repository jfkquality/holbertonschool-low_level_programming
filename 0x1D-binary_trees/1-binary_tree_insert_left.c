#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent node
 * @value: value to assign in node
 *
 * Return: node pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		node->parent = parent;
		node->left = parent->left;
		/* node->right = tempnode->right; */
		parent->left->parent = node;
		parent->left = node;

		/* binary_tree_insert_left(parent->left, value); */
	}
	return (node);
}
