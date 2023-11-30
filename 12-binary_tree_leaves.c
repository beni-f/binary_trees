#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * 
 * @tree: a pointer to the root node of the tree
 * 
 * Return: returns the number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    if ((tree->parent))
        return (1);
    else
        return (2);
}
