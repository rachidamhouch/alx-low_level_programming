#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list.
 * @head: Arg 1.
 * @n: arg 2.
 * Return: the address of the new
 * element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*node;
	listint_t	*tmp = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
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
