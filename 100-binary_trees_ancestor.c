#include "binary_trees.h"

/**
 * binary_trees_ancestor - returns the lowest common ancestor of two nodes in a binary tree
 * @first: first node to find the lowest common ancestor for.
 * @second: second node to find the lowest common ancestor for.
 * Return: the lowest common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL) {
		return NULL;
	}
	if (first->parent == second)
	{
		return (first->parent);
	}
	else if (second->parent == first)
	{
		return (second->parent);
	}
	else
	{
		return ((first->parent == second->parent) ? first->parent : binary_trees_ancestor(first->parent->n > second->parent->n ? first : first->parent, second->parent->n > first->parent->n ? second : second->parent));
	}
}
