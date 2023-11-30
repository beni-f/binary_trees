#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node in a binary tree
 * 
 * @tree: a pointer to the node to measure the depth
 * 
 * Return: returns the depth of a node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth;
    depth = ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
    return depth;
}
