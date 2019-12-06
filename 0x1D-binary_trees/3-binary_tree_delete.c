#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 *
 * @tree: tree pointer
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* binary_tree_t *root; */

	/* root = tree; */

	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
