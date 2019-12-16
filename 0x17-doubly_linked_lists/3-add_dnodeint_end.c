#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end of a list
 *
 * @head: Pointer to pointer type dlistint_t
 * @n: Pointer const type int
 *
 * Return: The address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		while (1)
		{
			if (current_node->next == NULL)
			{
				current_node->next = new_node;
				new_node->prev = current_node;
				break;
			}
			else
			{
				current_node = current_node->next;
			}
		}
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
