#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0, height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rheight = binary_tree_height(tree->right) + 1;
	if (lheight >= rheight)
		height = (lheight);
	else
		height = (rheight);
	return (height);
}

/**
 * binary_tree_balance - measures balance factor of a binary tree/node
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0 /* , height = 0 */;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		lheight = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		rheight = binary_tree_height(tree->right) + 1;
	return (lheight - rheight);
}
