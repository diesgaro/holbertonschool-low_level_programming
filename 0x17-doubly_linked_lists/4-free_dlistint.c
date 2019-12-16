#include "lists.h"
/**
 * free_dlistint - Function that frees a list
 *
 * @head: Pointer type listint_t
 *
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
