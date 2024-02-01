#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the number of nodes in a binary tree
 * @tree: the binary tree to count the nodes from.
 * Return: the number of nodes if it exists, 0 otherwise.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
    left = binary_tree_nodes(tree->left);
    right = binary_tree_nodes(tree->right);
	return (1 + (left + right));
}
