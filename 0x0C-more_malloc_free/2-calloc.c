#include "main.h"

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: Arg 1.
 * @size: arg 2.
 * Return: Returns a pointer to the allocated memory.
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	return (malloc(nmemb * size));
}
