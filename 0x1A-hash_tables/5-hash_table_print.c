#include "hash_tables.h"

/**
 * hash_table_print - ...
 * @ht: ...t
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
