#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: Arg 1.
 * @index: arg 2.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i = 0;
	listint_t		*tmp, *old;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	while (tmp)
	{
		if (i == index)
		{
			if (!i && !tmp->next)
			{
				free(&head);
				*head = NULL;
			}
			else if (i)
				old->next = tmp->next;
			else
				*head = tmp->next;
			free(tmp);
			break;
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	return (1);
}
