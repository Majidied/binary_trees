#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree node
 *@parent: the parent of this new node.
 *@value: integer to store in the node.
 *Return: pointer to the created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (struct binary_tree_s *)malloc(sizeof(struct binary_tree_s));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
