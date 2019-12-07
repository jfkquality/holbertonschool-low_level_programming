#include "binary_trees.h"


/* * find_depth - measures the depth of a node in a binary tree */
 /* * */
 /* * @tree: pointer to the root node of the tree to traverse */
 /* * */
 /* * Return: nothing */
 /* *\/ */

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nothing
 */

/* size_t find_depth(const binary_tree_t *tree) */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* depth = find_depth(tree->parent); */
	depth = binary_tree_depth(tree->parent) + 1;

	/* depth = (depth + 1); */

	return (depth);

}
/* /\** */
/*  * binary_tree_depth - measures the depth of a node in a binary tree */
/*  * */
/*  * @tree: pointer to the root node of the tree to traverse */
/*  * */
/*  * Return: nothing */
/*  *\/ */

/* size_t binary_tree_depth(const binary_tree_t *tree) */
/* { */
/* 	int depth = 0; */

/* 	depth = find_depth(tree); */

/* 	return (depth - 1); */
/* } */
