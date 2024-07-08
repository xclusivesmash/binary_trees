#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks for leaf nodes existence.
* @node: node to traverse.
* Return: 0 on success. Otherwise, NULL.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* INPUT CHECK */
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
