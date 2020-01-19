#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: hash table to add or update the key and value
 * @key: the key
 *
 * Return: the value associated, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_key;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index_key = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index_key];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);
}
