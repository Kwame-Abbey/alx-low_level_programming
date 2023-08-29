#include "lists.h"

size_t listint_len(const listint_t *head);

/**
 * listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 or  the number of unique nodes in the list.
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t num_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				num_nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				num_nodes++;
				tortoise = tortoise->next;
			}

			return (num_nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - prints a linked lists
 * @head: head of linked list
 * Return:Returns number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, index = 0;

	num_nodes = listint_len(head);

	if (num_nodes == 0)
	{
		for (; head != NULL; num_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < num_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (num_nodes);
}


