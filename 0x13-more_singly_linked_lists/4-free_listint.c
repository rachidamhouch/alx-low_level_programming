#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Arg 1.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		head = tmp;
		tmp = tmp->next;
		free(head);
	}
}
