#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: Arg 1.
 * @n: Arg 2.
 */
void	print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			ptr;
	unsigned int	i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i != 0)
			printf("%s", separator);
		else if (i != 0)
			printf("(nil)");
		printf("%s", va_arg(ptr, char *));
	}
	va_end(ptr);
	printf("\n");
}
