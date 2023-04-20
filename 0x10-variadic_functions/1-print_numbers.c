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
		printf("%d", va_arg(ptr, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	if (n)
		printf("\n");
}
