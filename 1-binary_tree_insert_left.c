#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
*
* @parent: A pointer to the parent tree
* @value: The value of the new node
*
* Return: A pointer to the newly created node, NULL if failed or parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		new->left = tmp;
		tmp->parent = new;
	}

	parent->left = new;

	return (new);
}
