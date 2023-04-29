#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Arg 1.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	tmp = *head;
	while (tmp)
	{
		head = tmp;
		tmp = tmp->next;
		free(head);
	}
	*head = NULL;
}
