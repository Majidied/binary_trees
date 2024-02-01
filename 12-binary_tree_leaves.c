#include "binary_trees.h"

/**
 * binary_tree_is_leaf - returns true if a node is a leaf, false otherwise.
 * @node: the node to be checked.
 * Return: 0 if the node has no children, 0 otherwise.
 */

int binary_tree_is_leaf1(const binary_tree_t *node)
{
	if (node == NULL || !(node->left == NULL && node->right == NULL))
		return (0);
	return (1);
}

/**
 * binary_tree_leaves - leaves of a binary tree
 * @tree: root node of the binary tree
 * Return: leaves of the binary tree or 0 if it's empty
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
    {
		return (0);
    }
    if (binary_tree_is_leaf1(tree))
    {
        return(1);
    }

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}