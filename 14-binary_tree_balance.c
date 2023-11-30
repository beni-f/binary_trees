#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: returns the height of a node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	return ((left > right ? left : right));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: returns the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
