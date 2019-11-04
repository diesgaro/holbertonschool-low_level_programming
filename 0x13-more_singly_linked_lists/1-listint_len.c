#include "lists.h"
/**
 * listint_len - Function that returns the number of elements in listint_t
 *
 * @h: Pointer type listint_t
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
