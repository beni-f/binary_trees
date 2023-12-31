#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: is a pointer to the node to find the sibling
 *
 * Return: returns sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);
	if (node->n < node->parent->n)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	return (sibling);
}
