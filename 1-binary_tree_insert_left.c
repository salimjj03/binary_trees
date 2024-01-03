#include "binary_trees.h"

/**
 * binary_tree_insert_left - ...
 * @parent: ...
 * @value: ...
 *
 * Return: ...
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		newnode->left = parent->left;
		parent->left = newnode;
		newnode->left->parent = newnode;
	}
	return (newnode);
}
