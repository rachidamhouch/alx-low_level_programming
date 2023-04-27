#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Arg 1.
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
	{
		head = tmp;
		tmp = tmp->next;
		free(head->str);
		free(head);
	}
}
