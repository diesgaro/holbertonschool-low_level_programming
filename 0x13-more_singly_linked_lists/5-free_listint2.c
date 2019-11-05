#include "lists.h"
/**
 * free_listint2 - Function that frees a list
 *
 * @head: Pointer to pointer type listint_t
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (*head == NULL)
		return;
	
	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
