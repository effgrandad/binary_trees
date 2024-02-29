#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determines whether a node is a binary tree leaf
 * @node: a pointer to the node to be determined
 * Return: return 1 if node is leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
