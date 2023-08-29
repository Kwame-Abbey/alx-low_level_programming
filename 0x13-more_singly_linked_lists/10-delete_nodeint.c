#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index of a
 * linked list
 *
 * @head: Head of linked list
 * @index: Deletes node at this index
 *
 * Return: 1 if successful and -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current = *head;
	unsigned int count;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
