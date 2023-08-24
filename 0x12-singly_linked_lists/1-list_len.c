#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t
 * @h: List
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
