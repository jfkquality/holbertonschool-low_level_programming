#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
