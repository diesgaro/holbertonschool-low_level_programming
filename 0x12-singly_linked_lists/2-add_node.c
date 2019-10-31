#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of a list
 *
 * @head: Pointer to pointer type list_t
 * @str: Pointer const tiype char
 *
 * Return: The address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int v_len;
	list_t *new_node;

	for (v_len = 0; str[v_len] != '\0'; v_len++)
		;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = v_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
