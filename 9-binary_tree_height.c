#include "binary_trees.h"


/**
 * binary_tree_is_leaf1 - returns true if a node is a leaf, false otherwise.
 * @node: the node to be checked.
 * Return: 0 if the node has no children, 0 otherwise.
 */

int binary_tree_is_leaf1(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height - height of a binary tree
 * @tree: root node of the binary tree
 * Return: height of the binary tree or 0 if it's empty
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf1(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (1 + (left > right ? left : right));
}
