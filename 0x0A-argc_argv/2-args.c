#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - main function.
 * @ac: arg 1.
 * @av: arg 1.
 * Return: 0 if the program finish whitout errors.
 */
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
		printf("%s\n", av[i++]);
	return (0);
}
