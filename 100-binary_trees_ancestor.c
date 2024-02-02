#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns the lowest common ancestor of two nodes
 * in a binary tree
 * @first: first node to find the lowest common ancestor for.
 * @second: second node to find the lowest common ancestor for.
 * Return: the lowest common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp_first, *temp_second;

	if (first == NULL || second == NULL)
		return NULL;
	temp_first = (binary_tree_t *)first;
	temp_second = (binary_tree_t *)second;
	while (temp_first != temp_second)
	{
		temp_first = (temp_first == NULL) ? second
			: temp_first->parent;
		temp_second = (temp_second == NULL) ? first
			: temp_second->parent;
	}
	return ((binary_tree_t *)temp_first);
}
