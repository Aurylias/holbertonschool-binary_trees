#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
*
* @parent: A pointer to the parent
* @value: The value of the current node
*
* Return: A pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		new->right = tmp;
		tmp->parent = new;
	}

	parent->right = new;

	return (new);
}
