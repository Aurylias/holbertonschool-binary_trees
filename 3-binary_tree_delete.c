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
	post_order_traversal(tree);
}

/**
* post_order_traversal - Use Post-order traversal to free all node of the tree
*
* @tree: A pointer to the root of the tree
*
* Return: None
*/

void post_order_traversal(binary_tree_t *tree)
{
	if (!tree)
		return;

	post_order_traversal(tree->left);
	post_order_traversal(tree->right);

	free(tree);
}
