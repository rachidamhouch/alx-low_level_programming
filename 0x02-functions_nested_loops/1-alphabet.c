#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char	a;

	a = 'a';
	while(a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
