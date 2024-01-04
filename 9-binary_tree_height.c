#include "binary_trees.h"

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

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	result = (l > r) ? l : r;
	return (result);
}
