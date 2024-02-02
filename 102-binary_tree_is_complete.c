#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 * @tree: root node of the binary tree
 * Return: size of the binary tree or 0 if it's empty
 */

size_t binary_tree_size1(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + (left + right));
}

/**
 * complete - check whether a binary tree is complete.
 * @tree: a binary tree to be checked.
 * @size: the size of the binary tree.
 * @i: the index of the binary tree in its level order traversal.
 */

int complete(binary_tree_t *tree, size_t i, size_t size)
{
	if (tree == NULL)
		return (1);
	if (i >= size)
		return (0);
	return (complete(tree->left, 2 * i + 1, size) && complete(tree->right,
				2 * i + 2, size));
}

/**
 * binary_tree_is_complete - returns true if a tree is complete,
 * false otherwise
 * @tree: the tree to check.
 * Return: true if it's complete, false otherwise.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (complete((binary_tree_t *)tree, 0, binary_tree_size1(tree)));
}
