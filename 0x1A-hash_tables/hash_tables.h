#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <time.h>
# include <string.h>

/**
 * struct hash_tables - hash table
 * @a: integer
 *
 * Description: ...
 *
 */
typedef struct hash_tables
{
	int a;
} hash_table_t;
hash_table_t *hash_table_create(unsigned long int size);
#endif
