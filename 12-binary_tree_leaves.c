#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree.
* @tree: given binary tree.
* Return: leaf count. Otherwise, 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* INPUT CHECK */
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
