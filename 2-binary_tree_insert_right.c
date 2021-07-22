#include "binary_trees.h"

/**
* binary_tree_insert_right - C - Binary trees
* @parent: Pointer to the node to insert the right-child in
* @value: The value to store in the new code
*
* Description: Function that inserts a node as the right-child
* of another node.
* Return: Pointer to the created node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create a new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Comprobate parent->right is empty */
	if (parent->right == NULL)
	{
		parent->right = new_node;
	}

	else if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
