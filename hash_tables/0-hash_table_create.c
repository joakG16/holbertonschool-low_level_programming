#include "hash_tables.h"

/**
 * @brief 
 * 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *newtable;
    unsigned long int idx;

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