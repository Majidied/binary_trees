#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a binary tree.
 * @tree: the tree to get the depth from.
 * Return: The depth of the tree, 0 if it's empty.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree  = tree->parent;
		depth++;
	}

	return (depth);

}
