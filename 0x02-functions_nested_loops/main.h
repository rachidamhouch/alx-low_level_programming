#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	_putchar(int c)
{
	write(1, &c, 1);
}

void	print_alphabet(void);
void	print_alphabet_x10(void);
int 	_islower(int c);
#endif