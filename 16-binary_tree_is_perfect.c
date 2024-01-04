#include "binary_trees.h"

/**
 * binary_tree_is_perfect - ...
 * @tree:.....
 *
 * Return: ...
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t total, h;
	int v;

	if (tree == NULL)
		return (0);

	total = binary_tree_size(tree);
	h = binary_tree_height(tree);

	if (power(2, h + 1) - 1  == (int)total)
		v = 1;
	else
		v = 0;
	return (v);
}

/**
 * binary_tree_size - ...
 * @tree:.....
 *
 * Return: ...
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}

/**
 * binary_tree_height - ...
 * @tree:.....
 *
 * Return: ...
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * power - ...
 * @base: ...
 * @exponent: ..
 *
 * Return: ...
 */

int power(int base, int exponent)
{
	int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}
