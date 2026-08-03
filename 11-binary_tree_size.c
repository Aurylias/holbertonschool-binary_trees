#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
*
* @tree: A pointer to the root of a binary tree
*
* Return: The size of the tree or 0 if the tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right) + 1;


	return (size);
}
