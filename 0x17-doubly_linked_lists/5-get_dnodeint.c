#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to first node of linked list
 * @index: index of the node
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t i;

	if (head == NULL)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	return (current);
}
