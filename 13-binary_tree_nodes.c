#include "binary_trees.h"

/**
* binary_tree_nodes - C - Binary trees
* @tree: pointer to the root node of the tree to count the number of nodes.
*
* Description: A function that counts the nodes with at least 1
* child in a binary tree.
* Return: Number of nodes with at least 1 child. If tree is NULL returns 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0, nodes_right = 0, total_nodes = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		nodes_left = binary_tree_nodes(tree->left);
		nodes_right = binary_tree_nodes(tree->right);
	}

	total_nodes = nodes_left + nodes_right + 1;
	return (total_nodes);
}
