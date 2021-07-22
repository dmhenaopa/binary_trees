#include "binary_trees.h"

/**
* binary_tree_delete - C - Binary trees
* @tree: Pointer to the root node of the tree to delete
*
* Description: Function that deletes an entire binary tree
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/* Delete the right-tree */
	binary_tree_delete(tree->right);

	/* Delete the right-tree */
	binary_tree_delete(tree->left);

	/* Delete root */
	free(tree);
}
