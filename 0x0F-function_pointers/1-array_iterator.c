#include "function_pointers.h"

/**
 * array_iterator - function that prints a name.
 * @array: arg 1.
 * @size: arg 2.
 * @action: arg 3.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (!action || !array)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
