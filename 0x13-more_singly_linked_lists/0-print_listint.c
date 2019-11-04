#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t
 *
 * @h: Pointer type listint_t
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int v_n;

	while (h != NULL)
	{
		v_n = h->n;
		printf("%i", v_n);
		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
