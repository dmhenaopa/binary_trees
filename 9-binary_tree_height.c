#include "binary_trees.h"

/**
* binary_tree_height - C - Binary trees
* @tree: pointer to the root node of the tree to measure the height.
*
* Description: A function that measures the height of a binary tree.
* Return: The height of the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left >= height_right)
	{
		return (height_left + 1);
	}

	else
	{
		return (height_right + 1);
	}
}
