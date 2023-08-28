#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Head node of the linked list
 * @index: Index of node to be returned
 * Return: Nth node of NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp_head = head;

	while (temp_head != NULL)
	{
		if (count == index)
			return (temp_head);
		count++;
		temp_head = temp_head->next;
	}

	return (NULL);
}
