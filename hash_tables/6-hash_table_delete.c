#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;

	if (ht == NULL)
		return;

	for(i = 0; i < ht->size; i++)
	{
		item = ht->array[i];

		if (item)
		{
			free(item->key);
			free(item->value);
			free(item);
		}
	}
	free(ht->array);
	free(ht);
}
