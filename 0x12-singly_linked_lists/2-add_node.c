#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: Arg 1.
 * @str: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t	*add_node(list_t **head, const char *str)
{
	list_t	*node;

	node = malloc(sizeof(list_t));
	if (!node || !head)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
