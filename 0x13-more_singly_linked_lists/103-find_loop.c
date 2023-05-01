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
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Arg 1.
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i, t;

	(void)i;
	(void)t;
	(void)head;
	(void)add_nodeptr;
	return (NULL);
}
