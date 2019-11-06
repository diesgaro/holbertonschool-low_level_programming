#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns th Nth node of a list
 *
 * @head: Pointer type listint_t
 * @index: Variable type unsigned int
 *
 * Return: The Nth node data or NULL if a node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
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
