#include "hash_tables.h"

/**
 * hash_table_set - ...
 * @ht: ...
 * @key: ...
 * @value: ...
 *
 * Return: 1 0r 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = 0;
	return (node);
}
