#include "lists.h"

size_t _strlen(const char *s);

/**
 * add_node - Adds a new node to the beginning of a linked list
 * @head: First node
 * @str: string to be added
 * Return: Address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* declare a new list_t variable */

	new_node = malloc(sizeof(list_t)); /* Allocate mem for it */

	/* Checking whether allocation was successful */
	if (new_node == NULL)
		return (NULL);

	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}

/**
 * _strlen - returns the length of a string
 * @s: String to be passed as argument
 * Return: Length of string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
