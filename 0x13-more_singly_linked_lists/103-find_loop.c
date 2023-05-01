#include "lists.h"

/**
 * check - fchecka linked list.
 * @head: Arg 1.
 * @c: arg 2.
 * @ptr: arg 3.
 * @i: arg 4.
 * Return: 1 or 0.
 */
int check(listint_t *head, int c, listint_t *ptr, int i)
{
	while (head && i < c)
	{
		if (head == ptr)
			return (1);
		head = head->next;
		i++;
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
	listint_t	*tmp = head;
	int			c = 0;

	while (tmp)
	{
		if (check(head, c, tmp, 0))
			return (tmp);
		tmp = tmp->next;
		c++;
	}
	return (NULL);
}
