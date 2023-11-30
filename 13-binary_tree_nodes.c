#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: is a pointer to the root node of the tree
 *
 * Return: returns the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left || tree->right)
		nodes = 1;
	nodes = nodes + binary_tree_nodes(tree->left)
	+ binary_tree_nodes(tree->right);
	return (nodes);
}
