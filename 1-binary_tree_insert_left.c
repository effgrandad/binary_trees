#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a node to a binary trees 
 * 			     as its left-child by default
 * @parent: a pointer to the node where the left-child should be inserted
 * @val: value stored in the new node
 * Return: on error return NULL, otherwise return pointer to new node
 * Description: In the event that a parent already has a left-child,
 * the old left-child is set as the left-child of the new node,
 * and the new node takes its place
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, val);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
