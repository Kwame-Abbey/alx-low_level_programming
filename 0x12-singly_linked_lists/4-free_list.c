#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: First node
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
