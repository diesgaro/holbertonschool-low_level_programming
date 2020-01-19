#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: hash table to print
 *
 * Return: NA
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node = NULL;
	char *separator = "";

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current_node = ht->array[i];

			while (current_node != NULL)
			{
				printf("%s'%s': '%s'",
				       separator,
				       current_node->key,
				       current_node->value);
				separator = ", ";
				current_node = current_node->next;
			}
		}
		printf("}\n");
	}
}
