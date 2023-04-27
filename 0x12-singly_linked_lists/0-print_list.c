#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Arg 1.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int	i = 0;

	if (!h)
		return (i);
	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
