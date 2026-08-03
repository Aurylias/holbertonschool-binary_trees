#include "binary_trees.h"

/**
* binary_tree_node - Create a binary tree node
*
* @parent: Pointer the the parent node
* @value: Value of the new node
*
* Return: A pointer to the new node or NULL if it fail
*
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
