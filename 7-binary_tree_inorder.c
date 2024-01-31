#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder traversal of a binary tree.
 * @tree: root node of the binary tree.
 * @func: pointer to apply on each visited node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
