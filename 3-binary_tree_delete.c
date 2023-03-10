#include <stdlib.h>

#include "binary_trees.h"
/**
 * binary_tree_delete - prototype function
 * @tree: parent
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
