#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns true if a node is a leaf, false otherwise.
 * @node: the node to be checked.
 * Return: 0 if the node has no children, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || !(node->left == NULL && node->right == NULL))
		return (0);
	return (1);
}
