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
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ptr, int));
			break;
		case 'i':
			printf("%s%i", sep, va_arg(ptr, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(ptr, double));
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
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
