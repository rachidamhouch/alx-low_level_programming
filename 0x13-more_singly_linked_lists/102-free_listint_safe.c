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

#include "lists.h"

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
 * free_listint_safe - This function can free lists with a loop.
 * @h: Arg 1.
 * Return: the number of nodes.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t	i = 0;
	listadr_t	*head = NULL;
	listint_t	*tmp, *tmp2;

	if (!h)
		return (0);
	tmp = *h;
	while (tmp)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		if (!is_exists(head, tmp2))
		{
			add_nodeptr(&head, tmp2);
			free(tmp2);
		}
		else
			break;
	}
	*h = NULL;
	free_listptr(head);
	return (i);
}

