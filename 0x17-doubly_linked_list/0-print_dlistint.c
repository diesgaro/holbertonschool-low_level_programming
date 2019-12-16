#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t
 *
 * @h: Pointer type list_t
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
