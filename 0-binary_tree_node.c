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

binary_trees_t *binary_tree_node(binary_trees_t *parent, int value)
{
	binary_trees_t *new;

	new = (binary_trees_t *)malloc(sizeof(binary_trees_t));
	if(!new)
		return (NULL);

	if (!parent)
		new->parent = NULL;
	else
		new->parent = parent;

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
