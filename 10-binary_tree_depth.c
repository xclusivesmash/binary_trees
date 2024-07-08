#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node
* in a binary tree.
* @tree: given binary tree.
* Return: depth of node. Otherwise, 0.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	/* INPUT CHECK */
	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth = depth + 1;
		tree = tree->parent;
	}
	return (depth);
}
