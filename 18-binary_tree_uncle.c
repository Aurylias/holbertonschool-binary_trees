#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node
*
* @node: A pointer to the node
*
* Return: A pointer to the uncle, otherwise NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent &&
		node->parent->parent->right)
		return (node->parent->right);
	else if (node->parent->parent->right == node->parent &&
		node->parent->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
