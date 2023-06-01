#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to be traversed
 * Return: size of tree or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (!tree)
		return (0);

	left_depth = binary_tree_size(tree->left);
	right_depth = binary_tree_size(tree->right);

	return (right_depth + left_depth + 1);
}
