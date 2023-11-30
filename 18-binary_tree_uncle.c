#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * 
 * @node: is a pointer to the node to find the uncle
 * 
 * Returns: returns the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *uncle = NULL;
    if (!node || !node->parent || !node->parent->parent)
        return NULL;
    if (node->parent->n < node->parent->parent->n)
    {
        if (node->parent->parent->right)
        {
            uncle = node->parent->parent->right;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        if (node->parent->parent->left)
        {
            uncle = node->parent->parent->left;
        }
        else
        {
            return NULL;
        }
    }
    return uncle;
}
