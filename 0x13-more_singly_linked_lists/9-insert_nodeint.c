#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: First node
 * @idx: Index at which new node is to be inserted
 * @n: Integer
 * Return: Address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *curr_node, *prev_node;

	curr_node = *head;
	prev_node = NULL;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = curr_node;
		*head = new_node;
		return (new_node);
	}

	while (curr_node != NULL)
	{
		if (count == idx)
		{
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = curr_node;
		curr_node = curr_node->next;
		count++;
	}

	return (NULL);
}
