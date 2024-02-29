#include "binary_trees.h"

/**
 * binary_tree_node - a binary tree node is generated
 * @parent: A pointer to the node's parent that has to be created
 * @val: value tp put in new node
 * Return: on error return - NULL
 * otherwise - pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int val)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = val;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
