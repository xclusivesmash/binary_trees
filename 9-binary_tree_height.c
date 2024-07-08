#include "binary_trees.h"

/**
* binary_tree_height - measures the height of tree.
* @tree: binary tree given.
* Return: size of @tree. Otherwise, 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L, R;
	/* BASE CASE */
	if (tree == NULL)
		return (0);
	L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	R = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (L > R)
		return (L);
	return (R);
}
