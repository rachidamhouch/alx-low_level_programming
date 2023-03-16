#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - puts
 * Return: 1 if the program finish whitout errors
 */
int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
