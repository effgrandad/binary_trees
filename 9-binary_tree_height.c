#include "binary_trees.h"

/**
 * binary_tree_height - calculates a binary tree's height
 * @tree: pointer to the tree's root node so that the height can be determined
 * Return: function returns 0 if tree is NULL, and height otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t b = 0, t = 0;

		b = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		t = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((b > t) ? b : t);
	}
	return (0);
}
