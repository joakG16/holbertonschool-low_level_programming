#include "hash_tables.h"

/**
 * hash_table_get - function that gets the value associated to the key provided
 * @ht: hash table to search such key(and respective value)
 * @key: key turned into an index and later be searched
 * Return: the value if it was found in the H.T, or NULL if it wasn't
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *arr_item;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	arr_item = ht->array[idx];

	while (arr_item != NULL)
	{
		if (strcmp(key, arr_item->key) == 0)
			return (arr_item->value);

		arr_item = arr_item->next;
	}
	return (NULL);
}
