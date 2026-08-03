#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
*
* @parent: Pointer to the parent tree
* @value: Value of the new node
*
* Return: Pointer to the newly created node, NULL if failed or parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (!parent->left)
		parent->right = parent->left;
	else
		parent->left = new;

	return (new);
}
