#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: Linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
