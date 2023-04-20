#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: Arg 1.
 */
void print_all(const char * const format, ...)
{
	va_list	ptr;
	int		i;
	char	*str;
	char	*sep = "";

	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(ptr, int), sep);
			break;
		case 'i':
			printf("%i%s", va_arg(ptr, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ptr, double), sep);
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		default:
			break;
		}
		sep = ", ";
		i++;
	}
	va_end(ptr);
	printf("\n");
}
