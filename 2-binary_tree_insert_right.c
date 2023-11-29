#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * 
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * 
 * Return: return a pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;
    if(!parent)
        return NULL;
    newnode = binary_tree_node(parent, value);

    if(!newnode)
        return NULL;
    
    if(parent->right)
    {
        newnode->right = parent->right;
        parent->right->parent = newnode;
    }
    parent->right = newnode;
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
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    return (0);
}