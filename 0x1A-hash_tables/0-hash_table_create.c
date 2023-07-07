#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: arg 1.
 * Return: pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	return (malloc(sizeof(hash_table_t *)));
}
