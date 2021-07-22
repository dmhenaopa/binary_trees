#include "binary_trees.h"

/**
* binary_tree_is_leaf - C - Binary trees
* @node: A pointer to the node to check
*
* Description: Function that checks if a node is a leaf
* Return: 1 if node is a leaf. Otherwise 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}
