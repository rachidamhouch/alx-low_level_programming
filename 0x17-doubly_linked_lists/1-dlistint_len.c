#include "lists.h"

/**
 * dlistint_len - function that return the number of elm.
 * @h: Arg 1.
 * Return: The number of elm.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
