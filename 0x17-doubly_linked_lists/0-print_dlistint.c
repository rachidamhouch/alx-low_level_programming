#include "lists.h"

/**
 * print_dlistint - function that prints list.
 * @h: Arg 1.
 * Return: The number of elm.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
