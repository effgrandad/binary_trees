#include "binary_trees.h"

/**
 * binary_tree_depth - determines a node's depth in a binary tree
 * @tree: A pointer to the depth-measuring node
 * Return: function returns 0 if tree is NULL, else return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
