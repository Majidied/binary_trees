#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    // Create a binary tree
    root = binary_tree_node(NULL, 98);
    if (root == NULL)
    {
        fprintf(stderr, "Failed to create root node\n");
        return (EXIT_FAILURE);
    }

    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    if (root->left == NULL || root->right == NULL)
    {
        fprintf(stderr, "Failed to create child nodes\n");
        return (EXIT_FAILURE);
    }

    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);

    printf("Original tree:\n");
    binary_tree_print(root);

    // Delete the entire tree
    binary_tree_delete(root);

    // Check if the 'root' pointer is now NULL
    if (!root)
        printf("Tree deleted successfully.\n");
    else
        printf("Error: 'root' pointer still not NULL after deletion (may lead to undefined behavior).\n");

    // Attempting to print the tree after deletion (undefined behavior).
    printf("After deletion (undefined behavior):\n");
    binary_tree_print(root);

    return (0);
}
