#include "binary_trees.h"

/**
 * binary_tree_balance - quantifies the binary tree's balancing factor
 * @tree: A pointer to the tree's root node so that the balancing factor
 *          can be calculated
 * Return: return 0, if tree is NULL else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height - quantify height of a binary tree
 * @tree: pointer to the tree's root node so that the height can be determined
 * Return: fuction returns 0 if tree is NULL, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t b = 0, t = 0;

		b = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		t = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((b > t) ? b : t);
	}
	return (0);
}
