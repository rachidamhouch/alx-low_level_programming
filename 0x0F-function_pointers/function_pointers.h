#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <time.h>
# include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int		_putchar(char c);
void    print_name(char *name, void (*f)(char *));
void    array_iterator(int *array, size_t size, void (*action)(int));
int     int_index(int *array, int size, int (*cmp)(int));

#endif
