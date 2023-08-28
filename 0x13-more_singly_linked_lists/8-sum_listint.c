#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a linked list
 * @head: Head node of linked list
 * Return: Sum of data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
