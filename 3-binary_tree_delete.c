#include "binary_trees.h"

/**
 * binary_tree_delete - deletes binary tree
 * @tree: a pointer to the tree's root node that has to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
