#include "binary_trees.h"

/**
 * binary_tree_postorder - uses post-order traversal to go through binary tree
 * @tree: a pointer to the tree's root node that needs to be traversed
 * @funct: a pointer to a callable function for every node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree && funct)
	{
		binary_tree_postorder(tree->left, funct);
		binary_tree_postorder(tree->right, funct);
		funct(tree->n);
	}
}
