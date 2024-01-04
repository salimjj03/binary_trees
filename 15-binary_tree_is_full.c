#include "binary_trees.h"

/**
 * binary_tree_is_full - ...
 * @tree:.....
 *
 * Return: ...
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t total, nodes;
	int v;

	if (tree == NULL)
		return (0);

	total = binary_tree_size(tree);
	nodes = binary_tree_nodes(tree);

	if (2 * nodes + 1 == total)
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
 * binary_tree_nodes - ...
 * @tree:.....
 *
 * Return: ...
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		size = size;
	else
		size += 1;
	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	return (size);
}
