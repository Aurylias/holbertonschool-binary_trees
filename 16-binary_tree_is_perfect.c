#include "binary_trees.h"

int height(const binary_tree_t *tree);
int size(const binary_tree_t *tree);

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
*
* @tree: A pointer to the root of a binary tree
*
* Return: 1 if perfect, otherwise 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, n, i;
	int power = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	h = height(tree);
	n = size(tree);

	for (i = 1; i < (h + 1); i++)
		power *= 2 * i;
	power -= 1;

	if (power == n)
		return (1);
	else
		return (0);
}

/**
* height - Measures the height of a binary tree
*
* @tree: A pointer to the root of the tree
*
* Return: The size of the tree
*/

int height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = height(tree->left) + 1;
	right_height = height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
* size - Measures the size of a binary tree
*
* @tree: A pointer to the root of a binary tree
*
* Return: The size of the tree or 0 if the tree is NULL
*/

int size(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_size = size(tree->left);
	right_size = size(tree->right);

	return (left_size + right_size + 1);
}
