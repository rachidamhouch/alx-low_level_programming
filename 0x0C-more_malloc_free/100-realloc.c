#include "main.h"

/**
 * _realloc - function that reallocates a memory block.
 * @ptr: Arg 1.
 * @old_size: arg 2.
 * @new_size: arg 3.
 * Return: Returns a pointer to the allocated memory.
 */
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char			*ptr1;
	char			*ptr2;
	unsigned int		i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	ptr1 = ptr;
	ptr2 = malloc(new_size);
	i = 0;
	if (!ptr2)
		return (NULL);
	while (i < old_size)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	free(ptr);
	return (ptr2);
}
