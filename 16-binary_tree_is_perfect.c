#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * 
 * @tree: a pointer to the root node of the tree to measure the height
 * 
 * Return: returns the height of a node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0, right = 0;
    if (!tree || (tree->right == NULL && tree->left == NULL))
        return 0;
    left = 1 + binary_tree_height(tree->left);
    right = 1 + binary_tree_height(tree->right);
    return((left > right)? left : right);
}
/**
 * binary_tree_is_perfect - binary tree is perfect
 * 
 * @tree: is a pointer to the root node of the tree
 * 
 * Return: returns 1 if the binary tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }

    // Check if all leaves are at the same level
    if (tree->left == NULL && tree->right == NULL) {
        return 1;
    }

    // Check if all internal nodes have two children
    if (tree->left == NULL || tree->right == NULL) {
        return 0;
    }

    return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}
