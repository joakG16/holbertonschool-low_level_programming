#include "hash_tables.h"

/**
 * hash_table_delete - free a Hash table function (and nodes inside)
 * @ht: hash table provided
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];

		while (item) /* needs to check both only an item, and more (Lin.Lis) */
		{
			free(item->key);
			free(item->value);
			free(item);
			item = item->next; /* in case of collision (multiple Lin.Lis) */
		}
		free(item);
	}
	free(ht->array);
	free(ht);
}
