#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of other node
 * Return: pointer
 * @parent: parent
 * @value: value
 *
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = malloc(sizeof(binary_tree_t));
	if (bt == NULL)
		return (NULL);

	bt->parent = parent;
	bt->n = value;
	bt->left = NULL;
	bt->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = bt;

	parent->right = bt;
	return (bt);

}
