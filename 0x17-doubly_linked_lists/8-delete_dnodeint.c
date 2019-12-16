#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes node at given index
 * position
 *
 * @head: Pointer to pointer type listint_t
 * @index: Variable type unsigned int
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head, *prev_node = NULL;
	unsigned int i = 0;

	if (head != NULL && *head != NULL)
	{
		if (index == 0)
		{
			*head = current_node->next;
			if (current_node->next != NULL)
				current_node->next->prev = NULL;
			free(current_node);
			return (1);
		}

		while (i < index)
		{
			if (current_node != NULL)
			{
				prev_node = current_node;
				current_node = current_node->next;
			}
			else
			{
				return (-1);
			}
			i++;
		}
		current_node->next->prev = current_node->prev;
		prev_node->next = current_node->next;
		free(current_node);

		return (1);
	}
	return (-1);
}
