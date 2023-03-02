#include "binary_trees.h"
/**
 * binary_tree_node - binary tree node
 * Return: pointer to the new node
 * @value: value of node
 * @parent: parent of node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
