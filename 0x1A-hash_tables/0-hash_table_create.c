#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: arg 1.
 * Return: pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (0);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (0);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = 0;
	return (hash_table);
}
