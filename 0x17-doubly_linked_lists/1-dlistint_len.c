#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in a list
 *
 * @h: Pointer type dlistint_t
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
