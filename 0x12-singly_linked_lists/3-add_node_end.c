#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: starting node
 * @str: String to be copied
 * Return: Address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	unsigned int length = 0;

	temp_node = *head;

	while (str[length])
	{
		length++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
