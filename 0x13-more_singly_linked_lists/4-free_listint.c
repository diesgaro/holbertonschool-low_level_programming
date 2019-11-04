#include "lists.h"
/**
 * free_listint - Function that frees a list
 *
 * @head: Pointer type listint_t
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
