#include "binary_trees.h"

/**
* binary_tree_preorder - pre-order traversal.
* @tree: binary tree to traverse.
* @func: function to use.
* Return: Nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* INPUT CHECK */
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
