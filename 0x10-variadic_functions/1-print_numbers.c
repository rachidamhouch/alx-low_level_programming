#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: Arg 1.
 * @n: Arg 2.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list			ptr;
	unsigned int	i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
