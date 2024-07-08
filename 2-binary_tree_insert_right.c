#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child
* of another node.
* @parent: parent node.
* @value: value to insert.
* Return: pointer to created node. Otherwise, NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	/* INPUT CHECK */
	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->right = parent->right;
	new->left = NULL;
	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	return (new);
}
