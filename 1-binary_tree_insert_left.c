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
    newnode = binary_tree_node(parent, value);
    if (parent == NULL)
        return NULL;
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

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}