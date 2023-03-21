#include "main.h"
/**
 * main - main function
 * Return: 0 if the program finish whitout errors
 */
int	main(void)
{
	int i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
