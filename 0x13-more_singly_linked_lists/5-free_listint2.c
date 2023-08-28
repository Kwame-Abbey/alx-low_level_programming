#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Points to the first node
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_head = (*head)->next;
		free(*head);
		*head = temp_head;
	}

	head = NULL;
}
