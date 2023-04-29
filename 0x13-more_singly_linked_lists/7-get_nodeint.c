#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: Arg 1.
 * @index: arg 2.
 * Return: returns the head node’s data (n)..
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
