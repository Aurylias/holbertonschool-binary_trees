#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
*
* @tree: A pointer to the root of the tree
*
* Return: The size of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
