#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 * @head: Arg 1.
 * @index: arg 2.
 * Return: the address of an element, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    int i = 0;
    while (head)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }
    return (NULL);
}
