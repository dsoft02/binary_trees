#include "binary_trees.h"
/**
 * binary_tree_insert_left - node for left-child of node
 * Return: pointer
 * @parent: parent
 * @value: value
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = malloc(sizeof(binary_tree_t));
	if (bt == NULL)
		return (NULL);

	bt->parent = parent;
	bt->n = value;
	bt->left = parent->left;
	bt->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = bt;

	parent->left = bt;

	return (bt);
}
