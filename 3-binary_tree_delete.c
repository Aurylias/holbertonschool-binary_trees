#include "binary_trees.h"

void post_order_traversal(binary_tree_t *tree);

/**
* binary_tree_delete - Deletes an entire binary tree
*
* @tree: A pointer to the root of a tree
*
* Return: None
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
