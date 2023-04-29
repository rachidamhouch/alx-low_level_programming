#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: Arg 1.
 * Return: the sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int	s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
