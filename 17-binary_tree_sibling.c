#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a given node in a binary tree
 * @node: the node to get the sibling from
 * Return: the sibling of the given node, NULL if it doesn't have one.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return ((node->parent->left != node) ? node->parent->left
			: node->parent->right);

}
