#include "binary_trees.h"

/**
 * binary_tree_nodes - ...
 * @tree:.....
 *
 * Return: ...
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - ...
 * @tree:.....
 *
 * Return: ...
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l, result;

	if (tree ==  NULL)
	{
		return (0);
	}
	l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	result = (l > r) ? l : r;
	return (result);
}
