#include "binary_trees.h"

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

	if (binary_tree_nodes(tree) > 0)
		return (0);
	else
		return (1);
}
