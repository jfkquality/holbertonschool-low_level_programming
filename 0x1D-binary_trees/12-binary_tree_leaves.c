#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaves = binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
