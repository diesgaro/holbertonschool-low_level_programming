#include "lists.h"
/**
 * print_list - Function that prints all the elements of a list_t
 *
 * @h: Pointer type list_t
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *v_str;
	unsigned int v_len;

	while (h != NULL)
	{
		v_str = h->str;
		v_len = h->len;
		if (v_str == NULL)
		{
			v_str = "(nil)";
			v_len = 0;
		}
		printf("[%u] %s", v_len, v_str);
		printf("\n");
		count++;
		h = h->next;
	}

	return (count);
}
