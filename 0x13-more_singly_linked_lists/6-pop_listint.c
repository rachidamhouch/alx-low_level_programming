#include "lists.h"

/**
 * pop_listint - function that deletes the
 * head node of a listint_t linked list.
 * @head: Arg 1.
 * Return: returns the head node’s data (n)..
 */
int pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int			n;

	if (!head || !*head)
		return (0);
	tmp = *head;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
