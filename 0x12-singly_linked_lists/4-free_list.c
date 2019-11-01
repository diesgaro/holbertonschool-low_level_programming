#include "lists.h"
/**
 * free_list - Function that frees a list
 *
 * @head: Pointer type list_t
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
