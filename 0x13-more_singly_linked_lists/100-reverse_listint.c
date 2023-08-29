#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Head
 * Return: Pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = current_node;
	}

	(*head)->next = prev_node;

	return (*head);

}
