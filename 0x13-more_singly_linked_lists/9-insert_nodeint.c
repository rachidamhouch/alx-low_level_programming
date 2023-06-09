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
	listint_t *tmp, *node, *old;

	if (!head)
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
			node->next = tmp;
			if (i)
				old->next = node;
			else
				*head = node;
			return (node);
		}
		old = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = NULL;
		if (!i)
			*head = node;
		else
			old->next = node;
		return (node);
	}
	return (NULL);
}
