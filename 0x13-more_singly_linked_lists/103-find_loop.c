#include "lists.h"

/**
 * add_nodeptr - function that adds a new node
 * at the beginning of a listadr_t list.
 * @head: Arg 1.
 * @ptr: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
static listadr_t *add_nodeptr(listadr_t **head, const listint_t *ptr)
{
	listadr_t	*node;

	node = malloc(sizeof(listadr_t));
	if (!node || !head)
		return (NULL);
	node->ptr = ptr;
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * free_listptr - function that frees a listint_t list.
 * @head: Arg 1.
 */
static void free_listptr(listadr_t *head)
{
	listadr_t *tmp = head;

	while (tmp)
	{
		head = tmp;
		tmp = tmp->next;
		free(head);
	}
}

/**
 * is_exists - is exists.
 * @head: Arg 1.
 * @ptr: arg 2.
 * Return: 0 or 1.
 */
static int is_exists(listadr_t *head, const listint_t *ptr)
{
	while (head)
	{
		if (head->ptr == ptr)
			return (1);
		head = head->next;
	}
	return (0);
}

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Arg 1.
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listadr_t	*h = NULL;

	while (head)
	{
		if (!is_exists(h, head))
			add_nodeptr(&h, head);
		else
		{
			free_listptr(h);
			return (head);
		}
		head = head->next;
	}
	free_listptr(h);
	return (NULL);
}
