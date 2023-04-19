#include "3-calc.h"

/**
 * get_op_func - function that
 * selects the correct function to
 * perform the operation asked by the user.
 * @s: arg 1.
 * Return: function pointer.
 */
int (*get_op_func(char *s))(int, int)
{
	int	i;
	char t[5] = {'+', '-', '*', '/', '%'};
	int (*f[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};


	i = 0;
	if (s[1])
	{
		printf("Error\n");
		exit(99);
	}
	while (i < 5)
	{
		if (*s == t[i])
			return (f[i]);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
