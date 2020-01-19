#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table to delete
 *
 * Return: NA
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node = NULL, *tmp_node = NULL;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				current_node = ht->array[i];

				while (current_node != NULL)
				{
					tmp_node = current_node;
					current_node = current_node->next;
					free(tmp_node->key);
					free(tmp_node->value);
					free(tmp_node);
				}
			}
			free(ht->array);
		}
		free(ht);
	}
}
