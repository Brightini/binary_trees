#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
*			that is, no node is NULL
*
* @tree:  pointer to the root node of the tree to be checked
* Return: 1 if tree is full. Otherwise 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_check;
	int right_check;

	if (tree)
	{
		if (!tree->left || !tree->right)
			return (0);

		left_check = binary_tree_is_full(tree->left);
		right_check = binary_tree_is_full(tree->right);

		if (left_check == right_check)
			return (1);
		else
			return (0);
	}
	return (0);
}
