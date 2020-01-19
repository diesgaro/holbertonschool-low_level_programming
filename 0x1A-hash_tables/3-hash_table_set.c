#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: hash table to add or update the key and value
 * @key: the key
 * @value: Value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index_key;
	hash_node_t *new_node = NULL, *current_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index_key = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index_key];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index_key] != NULL)
		new_node->next = ht->array[index_key];

	ht->array[index_key] = new_node;
	return (1);
}
