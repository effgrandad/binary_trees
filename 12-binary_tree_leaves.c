#include "binary_trees.h"

/**
 * binary_tree_leaves - tally a binary tree leave
 * @tree: pointer to tree's root node, from which the leaves should be counted
 * Return: the total tally of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
