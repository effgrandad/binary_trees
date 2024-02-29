#include "binary_trees.h"

/**
 * uses pre-order traversal to iterate through a binary tree
 * @tree: a pointer to the tree's root node that needs to be traversed
 * @funct: a pointer to a callable function for every node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree && funct)
	{
		funct(tree->n);
		binary_tree_preorder(tree->left, funct);
		binary_tree_preorder(tree->right, funct);
	}
}
