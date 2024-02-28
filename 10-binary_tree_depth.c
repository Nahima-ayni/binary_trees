#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the depth
 * Return: depth of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth;
	size_t right_depth;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		if (left_depth > right_depth)
			return (1 + left_depth);
		else
			return (1 + right_depth);
	}

	if (left_depth > right_depth)
		return (left_depth);
	else
		return (right_depth);
}
