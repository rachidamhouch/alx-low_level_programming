#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list.
 * @h: Arg 1.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
