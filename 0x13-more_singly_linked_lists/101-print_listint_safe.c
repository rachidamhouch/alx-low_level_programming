#include "lists.h"

/**
 * add_nodeptr - function that adds a new node
 * at the beginning of a listadr_t list.
 * @head: Arg 1.
 * @ptr: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
listadr_t *add_nodeptr(listadr_t **head, const listint_t *ptr)
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
void free_listptr(listadr_t *head)
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
int is_exists(listadr_t *head, const listint_t *ptr)
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
 * print_listint_safe - function that prints
 * all the elements of a listint_t list.
 * @head: Arg 1.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t	i = 0;
	listadr_t	*h = NULL;

	while (head)
	{
		if (!is_exists(h, head))
		{
			printf("[%p] %d\n", (void *)head, head->n);
			add_nodeptr(&h, head);
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free_listptr(h);
			return (i);
		}
		head = head->next;
		i++;
	}
	free_listptr(h);
	return (i);
}
