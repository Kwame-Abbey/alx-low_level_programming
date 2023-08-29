#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * linked list.
 * @head: A pointer to the head
 *
 * Return: NULL or the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	if (head == NULL || head->next == NULL)
		return (NULL);

	one = head->next;
	two = (head->next)->next;

	while (two)
	{
		if (one == two)
		{
			one = head;

			while (one != two)
			{
				one = one->next;
				two = two->next;
			}

			return (one);
		}

		one = one->next;
		two = (two->next)->next;
	}

	return (NULL);
}
