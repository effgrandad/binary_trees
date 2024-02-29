#include "binary_trees.h"

/**
 * is_full_recursive - recursively determines whether a binary tree is full
 * @tree: a pointer to the tree's root node for inspection
 * Return: returns 0 if tree is not full,else return 1
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - determines the size of a binary tree
 * @tree: a pointer to the tree's root node for inspection
 * Return: return 0 if tree is NULL or not full,else return 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
