#include "hash_tables.h"

/**
 * hash_table_delete - ...
 * @ht: ...
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next;

	if (!ht || !ht->array || !ht->size)
		return;
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
		i++;
	}
	free(ht->array);
	ht->array = 0;
	ht->size = 0;
	free(ht);
}
