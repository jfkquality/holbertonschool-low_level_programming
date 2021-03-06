#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);
	return (size);
}
