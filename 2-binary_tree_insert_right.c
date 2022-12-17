#include <stdlib.h>

#include "binary_trees.h"
/**
 * binary_tree_insert_right - prototype function
 * @parent: parent node
 * @value: value of the insertnode
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent->right != NULL)
		new->right = parent->right;
	parent->right = new;
	return (new);
}
