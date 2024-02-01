#include "binary_trees.h"

size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
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
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height1(tree->left);
	right = binary_tree_height1(tree->right);
	return (left - right);
}
