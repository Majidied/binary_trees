#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node in the left sub-tree of 
 * a given parent node.
 * @parent: the parent of this new node.
 * @value: integer to store in the node.
 * Return: pointer of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp = parent->left;
		new->left = temp;
		temp->parent = new;
	}
	parent->left = new;
	return (new);

}
