#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node at given
 * position
 *
 * @h: Pointer to pointer type listint_t
 * @idx: Variable type unsigned int
 * @n: Variable type int
 *
 * Return: The address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h, *prev_node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
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
	new_node->prev = prev_node;
	new_node->next = current_node;
	prev_node->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
