#include "binary_trees.h"

/**
 * binary_tree_inorder - employs in-order traversal to work through binary tree
 * @tree: a pointer to the tree's root node that needs to be traversed
 * @funct: a pointer to a callable function for every node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*funct)(int))
{
	if (tree && funct)
	{
		binary_tree_inorder(tree->left, funct);
		funct(tree->n);
		binary_tree_inorder(tree->right, funct);
	}
}
