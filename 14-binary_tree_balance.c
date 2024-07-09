#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
* binary_tree_balance - measures the balance
* factor of a binary tree.
* @tree: given binary tree.
* Return: balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int BF = 0, L = 0, R = 0;
	/* INPUT CHECK */
	if (tree == NULL)
		return (0);
	L = (int) binary_tree_height(tree->left);
	R = (int) binary_tree_height(tree->right);
	BF = L - R;
	return (BF);
}

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
	L = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	R = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	if (L > R)
		return (L);
	return (R);
}
