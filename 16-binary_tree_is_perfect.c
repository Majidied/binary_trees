#include "binary_trees.h"
/**
 * binary_tree_is_leaf4 - returns true if a node is a leaf, false otherwise.
 * @node: the node to be checked.
 * Return: 0 if the node has no children, 0 otherwise.
 */

int binary_tree_is_leaf4(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height4 - height of a binary tree
 * @tree: root node of the binary tree
 * Return: height of the binary tree or 0 if it's empty
 */

size_t binary_tree_height4(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf4(tree))
		return (0);
	left = binary_tree_height4(tree->left);
	right = binary_tree_height4(tree->right);
	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_is_perfect - returns whether a binary tree is perfect or not.
 * @tree: a binary tree to check
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height4(tree->left);
	right = binary_tree_height4(tree->right);
	if (left != right)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (1);

	return (0);

}
