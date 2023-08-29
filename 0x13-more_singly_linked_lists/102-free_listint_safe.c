#include "lists.h"

size_t listint_count(listint_t *head);

/**
 * listint_count - Counts the number of unique nodes
 *
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 orthe number of unique nodes in the list.
 */
size_t listint_count(listint_t *head)
{
	listint_t *tor, *hor;
	size_t num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	hor = (head->next)->next;

	while (hor)
	{
		if (tor == hor)
		{
			tor = head;
			while (tor != hor)
			{
				num_nodes++;
				tor = tor->next;
				hor = hor->next;
			}

			tor = tor->next;
			while (tor != hor)
			{
				num_nodes++;
				tor = tor->next;
			}

			return (num_nodes);
		}

		tor = tor->next;
		hor = (hor->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of
 *
 * Return: The size of the list that was freed.
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t num_nodes, index;

	num_nodes = listint_count(*h);

	if (num_nodes == 0)
	{
		for (; h != NULL && *h != NULL; num_nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < num_nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (num_nodes);
}
