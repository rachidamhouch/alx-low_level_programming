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
	int		m;

	va_start(ptr, format);
	i = 0;
	m = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			m = printf("%s%c", sep, va_arg(ptr, int));
			break;
		case 'i':
			m = printf("%s%i", sep, va_arg(ptr, int));
			break;
		case 'f':
			m = printf("%s%f", sep, va_arg(ptr, double));
			break;
		case 's':
			str = va_arg(ptr, char *);
			if (!str)
				str = "(nil)";
			m = printf("%s%s", sep, str);
			break;
		default:
			break;
		}
		if (m)
			sep = ", ";
		i++;
	}
	va_end(ptr);
	printf("\n");
}
