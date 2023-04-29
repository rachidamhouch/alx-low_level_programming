#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: Arg 1.
 * @n: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*node;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Arg 1.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t	*tmp, *head2 = NULL;

	if (!head || !*head)
		return (NULL);
	tmp = *head;
	while (tmp)
	{
		add_nodeint(&head2, tmp->n);
		tmp = tmp->next;
	}
	*head = head2;
	return (*head);
}
