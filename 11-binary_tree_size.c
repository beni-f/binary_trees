#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree
 *
 * Return: returns the size of a binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);
	return (size);
}
