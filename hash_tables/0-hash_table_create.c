#include "hash_tables.h"

/**
 *hash_table_create - create dynamically a hash table
 *@size: hash table size
 *Return: a newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	if (size == 0)
		return (NULL);

	newtable = malloc(sizeof(hash_table_t));

	if (!newtable)
		return (NULL);

	newtable->size = size;
	newtable->array = calloc(size, sizeof(hash_node_t *));

	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}

	return (newtable);
}
