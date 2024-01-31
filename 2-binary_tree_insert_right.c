#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node at the right of another one in a binary tree.
 * @parent: the parent of this new node.
 * @value: integer to store in the node.
 * Return: pointer of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		new->right = temp;
		temp->parent = new;
	}
	parent->right = new;
	return (new);

}
