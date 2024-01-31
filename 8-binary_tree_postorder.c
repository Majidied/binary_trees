#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal of a binary tree.
 * @tree: root node of the binary tree.
 * @func: pointer to apply on each visited node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
