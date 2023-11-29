#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * 
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * 
 * Return: returns the created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    newnode = malloc(sizeof(binary_tree_t));
    if (!newnode)
        return NULL;
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);

    root->left = binary_tree_node(root, 12);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);

    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    binary_tree_print(root);
    return (0);
}