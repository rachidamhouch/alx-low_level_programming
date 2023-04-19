#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: arg 1.
 * @f: arg 2.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
