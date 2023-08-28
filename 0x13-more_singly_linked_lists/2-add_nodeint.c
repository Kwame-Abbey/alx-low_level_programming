#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Linked list
 * @n: integer
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Dynamically allocate memory for new node */
	new_node = malloc(sizeof(listint_t));

	/* Check to see if memory was allocated successfully */
	if (new_node == NULL)
		return (NULL);

	/* Assign new node it's corresponding data */
	new_node->n = n;
	new_node->next = *head;

	/* Pointing the head to newly created node */
	*head = new_node;

	return (new_node);
}
