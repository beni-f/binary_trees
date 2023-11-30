#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * 
 * @tree: a pointer to the root node of the tree to measure the height
 * 
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
