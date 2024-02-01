#include "binary_trees.h"

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
    if (binary_tree_is_leaf(tree))
    {
        return(1);
    }

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}