#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Linked list
 * @n: Integer
 * Return: Address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_head;

	/* initializing temp_head to head */
	temp_head = *head;

	/* Dynamically allocating memory for new node */
	new_node = malloc(sizeof(listint_t));

	/* check to see if memory allocation is successfull */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* Check to see if there's no node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traversing linked list to reach end */
	while (temp_head->next != NULL)
		temp_head = temp_head->next;

	/* Attaching new node to end of list */
	temp_head->next = new_node;

	return (new_node);
}
