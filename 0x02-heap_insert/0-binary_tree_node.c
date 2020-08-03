#include "binary_trees.h"
/**
 * *binary_tree_node - function that  concatenates two strings.
 * @parent: The first string.
 * @value: the value
 * Return: node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
		parent = new;
	return (new);
}
