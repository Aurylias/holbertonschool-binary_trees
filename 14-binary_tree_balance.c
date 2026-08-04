#include "binary_trees.h"

int height(const binary_tree_t *tree);

/**
* binary_tree_balance - Measures the balance factor of a binary tree
*
* @tree: A pointer to the root of the binary tree
*
* Return: The balance factor or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}

/**
* height - Get the height of each branch
*
* @tree: A pointer to the root of the binary tree
*
* Return: The height of a branch, or -1
*/

int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (-1);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
