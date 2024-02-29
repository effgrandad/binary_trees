#include "binary_trees.h"

/**
 * binary_tree_is_root - determine if weather a node is a root of binary tree
 * @node: a pointer to the node to be determined
 * Return: return 1 if node is a root,otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
