#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: Arg 1.
 * @n: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*node, *hd = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = hd;
	node->prev = NULL;
	if (hd)
		hd->prev = node;
	*head = node;
	return (node);
}
