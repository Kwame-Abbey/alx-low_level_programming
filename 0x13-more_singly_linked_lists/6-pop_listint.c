#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Head node of a linked list
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_head = *head;
	int node_data;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	node_data = temp_head->n;
	free(temp_head);

	return (node_data);
}
