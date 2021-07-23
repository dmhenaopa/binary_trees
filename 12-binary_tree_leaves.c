#include "binary_trees.h"

/**
* binary_tree_leaves - C - Binary trees
* @tree: pointer to the root node of the tree to count the number of leaves.
*
* Description: A function that counts the leaves in a binary tree.
* Return: Number of leaves in binary tree. If tree is NULL return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0, total_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	else
	{
		leaves_left = binary_tree_leaves(tree->left);
		leaves_right = binary_tree_leaves(tree->right);
		total_leaves = leaves_left + leaves_right;
	}
	return (total_leaves);
}
