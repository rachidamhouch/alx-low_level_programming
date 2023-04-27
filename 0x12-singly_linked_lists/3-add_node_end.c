#include "lists.h"

/**
 * add_node_end - function that adds a new
 * node at the end of a list_t list.
 * @head: Arg 1.
 * @str: arg 2.
 * Return: the address of the new
 * element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*node;
	list_t	*tmp = *head;

	node = malloc(sizeof(list_t));
	if (!node || !head)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	return (node);
}
