#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull = 0, rfull = 0 /* , height = 0 */;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
	{
		lfull = binary_tree_is_full(tree->left);
		rfull = binary_tree_is_full(tree->right);
		return (lfull && rfull);
	}
	return (0);
}
