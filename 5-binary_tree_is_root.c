#include "binary_trees.h"

/**
* binary_tree_is_root - checks if given node is a
* root node.
* @node: node to check for root node.
* Return: 0 on success. Otherwise, NULL.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	/* INPUT CHECK */
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
