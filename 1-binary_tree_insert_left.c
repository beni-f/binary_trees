#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * 
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * 
 * Return: returns a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;
    if (parent == NULL)
        return NULL;
    newnode = binary_tree_node(parent, value);
    if (!newnode)
        return NULL;
    if (parent->left)
    {
        newnode->left = parent->left;
        parent->left->parent = newnode;
    }    
    parent->left = newnode;  
    return newnode;     
}
