#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node.
* @parent: root node of the tree.
* @value: value to store in new node.
* Return: pointer to new node. Otherwise, NULL
* is returned.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* MEMORY ALLOC. CHECK */
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	/* VALUE ASSIGNMENT */
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
