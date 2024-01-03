#include "binary_trees.h"

/**
 * binary_tree_insert_right - ...
 * @parent: ...
 * @value: ...
 *
 * Return: ...
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = newnode;
	else
	{
		newnode->right = parent->right;
		parent->right = newnode;
		newnode->right->parent = newnode;
	}
	return (newnode);
}
