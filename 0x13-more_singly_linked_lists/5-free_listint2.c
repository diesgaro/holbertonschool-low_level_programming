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
	listint_t *current_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current_node = *head;
			*head = (*head)->next;
			free(current_node);
		}
		*head = NULL;
	}
}
