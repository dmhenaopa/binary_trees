#include "binary_trees.h"

/**
* binary_tree_node - C - Binary trees
* @parent: pointer to parent node
* @value: value to put into the new node
*
* Description: Function that creates a binary tree node
* Return: Pointer to the new node. Otherwise, NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Create a new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
