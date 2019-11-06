#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a list
 *
 * @head: Pointer to pointer type listint_t
 *
 * Return: The head node data or 0 if a list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int v_num;

	if (*head == NULL)
		return (0);

	v_num = (*head)->n;
	tmp_node = (*head)->next;
	free(*head);
	*head = tmp_node;

	return (v_num);
}
