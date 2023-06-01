#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to be traversed
 * Return: number of nodes with at least one child
 * or 0 if tree is null or has one node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_node;
	size_t left_node;

	if (!tree)
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	if ((tree->left || tree->right))
		return (1 + left_node + right_node);

	return (left_node + right_node);
}
