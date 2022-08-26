#include "hash_tables.h"

/**
 * hash_table_print - print a hash table function
 * @ht: hash table provided
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long idx;
	hash_node_t *arr_item;
	char *comma = ""; /* for the comma between elements */

	if (ht == NULL)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		arr_item = ht->array[idx];

		while (arr_item != NULL)
		{
			printf("%s'%s': '%s'", comma, arr_item->key, arr_item->value);
			comma = ", ";
			arr_item = arr_item->next;
		}

	}
	printf("}\n");
}
