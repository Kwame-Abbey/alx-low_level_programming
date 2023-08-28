#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: Points to the first node
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_head;

	while (*head != NULL)
	{
		temp_head = *head;
		free(temp_head);
		*head = (*head)->next;
	}

	*head = NULL;
}
