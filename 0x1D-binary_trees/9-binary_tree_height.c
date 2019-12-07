#include "binary_trees.h"

/**
 * find_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */

size_t find_height(const binary_tree_t *tree)
{
	int ldepth = 0, rdepth = 0, height = 0;

	if (tree == NULL)
		return (0);

	ldepth = find_height(tree->left);
	rdepth = find_height(tree->right);

	if (ldepth > rdepth)
		height = (ldepth + 1);
	else
		height = (rdepth + 1);
	return (height);

}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;
	height = find_height(tree);
	return (height - 1);
}
