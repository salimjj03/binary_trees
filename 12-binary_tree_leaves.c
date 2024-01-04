#include "binary_trees.h"

/**
 * binary_tree_leaves - ...
 * @tree:.....
 *
 * Return: ...
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		size += 1;
	else
		size = size;
	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	return (size);
}
