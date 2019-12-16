#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns th Nth node of a list
 *
 * @head: Pointer type dlistint_t
 * @index: Variable type unsigned int
 *
 * Return: The Nth node data or NULL if a node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		else
			return (NULL);

		i++;
	}

	return (tmp_node);
}
