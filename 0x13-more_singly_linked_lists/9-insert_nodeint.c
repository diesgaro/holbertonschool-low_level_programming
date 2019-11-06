#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node at given position
 *
 * @head: Pointer to pointer type listint_t
 * @idx: Variable type unsigned int
 * @n: Variable type int
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node = *head, *prev_node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (i < idx)
	{
		if (current_node != NULL)
		{
			prev_node = current_node;
			current_node = current_node->next;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
