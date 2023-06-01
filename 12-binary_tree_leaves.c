#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to be traversed
 * Return: number of leaves of tree or 1 if tree has a single node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf;
	size_t right_leaf;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}
