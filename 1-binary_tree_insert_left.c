#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as a left-child
* to an existing node.
* @parent: root node.
* @value: value to insert.
* Return: Created node or NULL upon failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new->left = parent->left;
	new->right = NULL;
	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;
	return (new);
}
