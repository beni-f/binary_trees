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
int main(void)
{
    binary_tree_t *root;
    binary_tree_t *uncle;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    root->left->right = binary_tree_node(root->left, 54);
    root->right->right = binary_tree_node(root->right, 402);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 110);
    root->right->right->left = binary_tree_node(root->right->right, 200);
    root->right->right->right = binary_tree_node(root->right->right, 512);

    binary_tree_print(root);
    uncle = binary_tree_uncle(root->right->left);
    printf("Uncle of %d: %d\n", root->right->left->n, uncle->n);
    uncle = binary_tree_uncle(root->left->right);
    printf("Uncle of %d: %d\n", root->left->right->n, uncle->n);
    uncle = binary_tree_uncle(root->left);
    printf("Uncle of %d: %p\n", root->left->n, (void *)uncle);
    return (0);
}