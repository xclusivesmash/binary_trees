#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node.
* @node: node to check for siblings.
* Return: pointer to sibling node.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* INPUT CHECK */
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node != node->parent->left)
		return (node->parent->left);
	return (node->parent->right);
}
