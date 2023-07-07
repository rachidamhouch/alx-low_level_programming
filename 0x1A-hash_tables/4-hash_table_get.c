#include "hash_tables.h"

/**
 * hash_table_get - ...
 * @ht: ...
 * @key: ...
 *
 * Return: ...
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !ht->array || !ht->size ||
	    !key || !strlen(key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (0);
}
