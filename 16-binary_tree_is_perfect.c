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

	if (!tree || (tree->right == NULL && tree->left == NULL))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	return ((left > right) ? left : right);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree
 *
 * Return: returns 1 if its full binary tree, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && !tree->right))
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

/**
 * binary_tree_is_perfect - binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree
 *
 * Return: returns 1 if the binary tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (((binary_tree_height(tree->left) ==
	binary_tree_height(tree->right)) && (binary_tree_is_full(tree->left)
	&& binary_tree_is_full(tree->right)) ? 1 : 0));
}
