#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 * @head: Arg 1.
 * @idx: arg 2.
 * @n: arg 3.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int	i = 0;
	listint_t *tmp, *node;

	if (!head || !*head)
		return (NULL);
	tmp = *head;
	while (tmp)
	{
		if (i == idx)
		{
			node = malloc(sizeof(listint_t));
			if (!node)
				return (NULL);
			node->n = n;
			node->next = tmp->next;
			tmp->next = node;
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
