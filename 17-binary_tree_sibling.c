#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node
*
* @node: A pointeur to a node
*
* Return: A pointeur to that sibling
*/

binary_tree_t * binary_tree_sibling( binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	else if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	else
		return (0);
}
