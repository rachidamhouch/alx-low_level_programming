#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: Arg 1.
 * @idx: arg 2.
 * @n: arg 3.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t		*node, *hd = *h;
	unsigned int	i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node || !h)
		return (NULL);
	node->n = n;
	while (hd->next)
	{
		if (i == idx)
			break;
		hd = hd->next;
		i++;
	}
	if (!hd->next && idx > i + 1)
		return (NULL);
	else if (!hd->next && idx == i + 1)
	{
		node->next = NULL;
		node->prev = hd;
		hd->next = node;
		return (node);
	}
	node->next = hd;
	node->prev = hd->prev;
	if (idx)
		hd->prev->next = node;
	else
		*h = node;
	hd->prev = node;
	return (node);
}
