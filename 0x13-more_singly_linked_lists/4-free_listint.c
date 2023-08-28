#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Points to the first node
 * Return: Void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_head;

	while (head != NULL)
	{
		temp_head = head;
		free(temp_head);
		head = head->next;
	}
}
