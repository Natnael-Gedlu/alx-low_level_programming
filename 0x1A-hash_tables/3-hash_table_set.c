#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table.
 * @key: key to add.
 * @value: value of the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *bucket, *new_node;
    char *key_copy, *value_copy;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    bucket = ht->array[index];

    while (bucket)
    {
        if (strcmp(key, bucket->key) == 0)
        {
            free(bucket->value);
            bucket->value = strdup(value);
            if (!bucket->value)
                return (0);
            return (1);
        }
        bucket = bucket->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    key_copy = strdup(key);
    value_copy = strdup(value);

    if (!key_copy || !value_copy)
    {
        free(key_copy);
        free(value_copy);
        free(new_node);
        return (0);
    }

    new_node->key = key_copy;
    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}
