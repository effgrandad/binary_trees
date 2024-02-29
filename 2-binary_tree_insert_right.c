#include "binary_trees.h"

/**
 * binary_tree_insert_right - In a binary tree, insert a node as
 *                            the right-child of another
 * @parent: a pointer to the node where the right-child should be inserted
 * @val: value stored in the new node
 * Return: on error return NULL, otherwise a pointer to the new node
 * Discription: In the event that a parent already has a right-child,
 *              the old right-child is set as the right-child of the new node,
 *              and the new node takes its place
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, val);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
