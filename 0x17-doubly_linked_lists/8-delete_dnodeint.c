#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: pointer to first node of linked list
 * @index: index of node to be deleted
 * Return: 1 if successful or -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next;
	size_t i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	current = *head;

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	next->next->prev = current;
	free(next);
	return (1);
}
