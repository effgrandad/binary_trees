#include "binary_trees.h"

/**
 * binary_tree_sibling - locates a node's sibling in a binary tree
 * @node: a pointer to the node whose sibling has to be located
 * Return: returns 0 if node is NULL or theres no sibling, else return pointer
 * to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
