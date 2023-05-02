#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Arg 1.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h) 
{
	size_t	i = 0;

	if (!h)
		return (i);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
