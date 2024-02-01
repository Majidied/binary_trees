#include "binary_trees.h"


/**
 * binary_tree_is_leaf3 - returns true if a node is a leaf, false otherwise.
 * @node: the node to be checked.
 * Return: 0 if the node has no children, 0 otherwise.
 */

int binary_tree_is_leaf3(const binary_tree_t *node)
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

size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (-1);
	if (binary_tree_is_leaf3(tree))
		return (0);
	left = binary_tree_height1(tree->left);
	right = binary_tree_height1(tree->right);
	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - balance factor of a binary tree.
 * @tree: root node of the binary tree.
 * Return: balance factor of the binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height1(tree->left) - binary_tree_height1(tree->right));
}
