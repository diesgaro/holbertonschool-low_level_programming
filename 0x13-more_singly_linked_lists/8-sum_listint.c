#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all data of a list
 *
 * @head: Pointer type listint_t
 *
 * Return: The sum of data or 0 if a list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (1)
	{
		if (tmp_node->next != NULL)
		{
			sum += tmp_node->n;
			tmp_node = tmp_node->next;
		}
		else
		{
			sum += tmp_node->n;
			break;
		}
	}

	return (sum);
}
