#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *newnode_ptr;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = newnode->right = NULL;


	if (!parent->left)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		newnode->left = parent->left;
		(parent->left)->parent = newnode;
		newnode->parent = parent;
	}

	newnode_ptr = newnode;
	return (newnode_ptr);
}
