#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: Arg 1.
 * @idx: arg 2.
 * @n: arg 3.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t		*node, *hd = *h;
	unsigned int	i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node || !h)
		return (NULL);
	node->n = n;
	while (hd->next)
	{
		if (i == idx)
			break;
		hd = hd->next;
		i++;
	}
	if (!hd->next && idx > i)
		return (NULL);
	node->next = hd;
	node->prev = hd->prev;
	if (idx)
		hd->prev->next = node;
	else
		*h = node;
	hd->prev = node;
	return (node);
}

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 7, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
