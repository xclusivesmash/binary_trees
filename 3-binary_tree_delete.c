#include "binary_trees.h"

/**
* binary_tree_delete - deletes an entire b-tree.
* @tree: binary to delete.
* Return: Nothing.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* INPUT CHECK */
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
