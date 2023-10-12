#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to head of node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
