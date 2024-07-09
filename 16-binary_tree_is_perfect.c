#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
int _pow_recursion(int x, int y);

/**
* binary_tree_is_perfect - checks if a binary tree is perfect.
* @tree: given binary tree.
* Return: perfect tree check.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, check, power;
	/* INPUT CHECK */
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	power = (size_t) (_pow_recursion(2, (int)(height + 1)) - 1);
	check = (int) (power == nodes);
	return (check);
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
	L = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	R = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (L > R)
		return (L);
	return (R);
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

/**
 * _pow_recursion - computes a number raised to an exponent.
 * @x: base
 * @y: exponent
 * Return: x raised to y or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	/* error check */
	if (y < 0)
		return (-1);

	/* base case */
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
