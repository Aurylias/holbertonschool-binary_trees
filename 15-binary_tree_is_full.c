#include "binary_trees.h"

size_t nodes(const binary_tree_t *tree);

/**
* binary_tree_is_full - Checks if a binary tree is full
*
* @tree: A pointer to the root of the binary tree
*
* Return: 1 if full, otherwise 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (nodes(tree) > 0)
		return (0);
	else
		return (1);
}

/**
* nodes - Counts the nodes with at least 1 child in a binary tree
*
* @tree: A pointer to the root of the binary tree
*
* Return: The number of nodes with at least 1 child
*/

size_t nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		node = 1;

	return (nodes(tree->left) + nodes(tree->right) + node);
}
