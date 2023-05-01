#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: Arg 1.
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && slow->next && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			return (fast);
	}
	return (NULL);
}
