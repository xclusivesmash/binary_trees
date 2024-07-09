#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
* binary_tree_uncle - finds the uncle of a node.
* @node: node for which to find uncle.
* Return: pointer to uncle node. Otherwise, NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* INPUT CHECK */
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

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
