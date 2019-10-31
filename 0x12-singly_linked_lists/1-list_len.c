#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a list
 *
 * @h: Pointer type list_t
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
