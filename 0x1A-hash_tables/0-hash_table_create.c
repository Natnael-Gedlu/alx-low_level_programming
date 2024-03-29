#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = NULL;

    if (size == 0)
        return (NULL);

    table = malloc(sizeof(hash_table_t));
    if (table == NULL)
        return (NULL);

    table->size = size;
    table->array = malloc(sizeof(hash_node_t *) * size);
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }

    memset(table->array, 0, sizeof(hash_node_t *) * size);

    return (table);
}
