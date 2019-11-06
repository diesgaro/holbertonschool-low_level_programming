#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes node at given index position
 *
 * @head: Pointer to pointer type listint_t
 * @index: Variable type unsigned int
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *prev_node = NULL;
	unsigned int i = 0;

	if (head != NULL && *head != NULL)
	{
		if (index == 0)
		{
			current_node = current_node->next;
			free(*head);
			*head = current_node;
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

		prev_node->next = current_node->next;
		free(current_node);

		return (1);
	}
	return (-1);
}
