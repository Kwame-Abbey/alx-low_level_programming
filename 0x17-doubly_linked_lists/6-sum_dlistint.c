#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer to the first node of a linked list
 * Return: sum of all data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int result = 0;

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
