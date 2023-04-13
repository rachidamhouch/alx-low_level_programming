#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Arg 1.
 * @b: Arg 2.
 * @n: Arg 2.
 * Return: A pointer to the resulting string.
 */
void	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: Arg 1.
 * @size: arg 2.
 * Return: Returns a pointer to the allocated memory.
 */
void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr)
		_memset(ptr, 0, nmemb * size);
	return (ptr);
}
