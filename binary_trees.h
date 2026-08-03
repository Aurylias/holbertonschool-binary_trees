#ifndef binary_trees_h
#define binary_trees_h

#include <stdio.h>
#include <stdlib.h>

/**
* struct binary_trees_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
*/

struct binary_trees_s
{
	int n;
	struct binary_trees_s *parent;
	struct binary_trees_s *left;
	struct binary_trees_s *right;
};

typedef struct binary_trees_s binary_trees_t;
typedef struct binary_trees_s bst_t;
typedef struct binary_trees_s avl_t;
typedef struct binary_trees_s heap_t;

binary_trees_t *binary_tree_node(binary_trees_t *parent, int value);

#endif
