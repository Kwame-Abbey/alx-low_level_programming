#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the node at the index of a
 * linked list
 *
 * @head: Head of linked list
 * @idx: inserts node at this index
 * @n: integer
 *
 * Return: Address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (current->next == NULL || current == NULL)
			return (NULL);
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
