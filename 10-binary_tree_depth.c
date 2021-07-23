#include "binary_trees.h"

/**
* binary_tree_depth - C - Binary trees
* @tree: pointer to the root node of the tree to measure the depth.
*
* Description: A function that measures the depth of a binary tree.
* Return: The depth of the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *copy_tree = NULL;

	if (tree == NULL)
	{
		return (0);
	}

	copy_tree = tree;
	while (copy_tree->parent != NULL)
	{
		depth++;
		copy_tree = copy_tree->parent;
	}
	return (depth);
}
