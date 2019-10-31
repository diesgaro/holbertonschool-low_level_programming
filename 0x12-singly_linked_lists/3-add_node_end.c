#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of a list
 *
 * @head: Pointer to pointer type list_t
 * @str: Pointer const tiype char
 *
 * Return: The address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int v_len;
	list_t *new_node, *current_node = *head;

	for (v_len = 0; str[v_len] != '\0'; v_len++)
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = v_len;
	new_node->next = NULL;

	if (*head != NULL)
	{
		while (1)
		{
			if (current_node->next == NULL)
			{
				current_node->next = new_node;
				break;
			}
			else
			{
				current_node = current_node->next;
			}
		}
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
