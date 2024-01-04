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

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		result = l + 1;
	else
		result = r + 1;

	return (result);
}
