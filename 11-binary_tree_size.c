#include "binary_trees.h"

/**
* binary_tree_size - C - Binary trees
* @tree: A pointer to the root node of the tree to measure the size.
*
* Description: A function that measures the size of a binary tree.
* Return: Size of a binary tree. If tree is NULL, returns 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0, total_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	total_size = size_left + size_right + 1;

	return (total_size);
}
