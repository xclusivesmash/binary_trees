#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

/**
* binary_tree_nodes - counts the nodes with
* at least 1 child in a binary tree.
* @tree: given binary tree.
* Return: node count. Otherwise, 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* INPUT CHECK */
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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

/**
* binary_tree_size - measures the size of a binary tree.
* @tree: given binary tree.
* Return: size of @tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* BASE CASE */
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
