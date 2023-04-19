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
	op_t t[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	i = 0;
	while (i < 5)
	{
		if (!strcmp(s,  t[i].op))
			return (t[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
