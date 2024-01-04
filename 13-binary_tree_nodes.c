#include "binary_trees.h"

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
