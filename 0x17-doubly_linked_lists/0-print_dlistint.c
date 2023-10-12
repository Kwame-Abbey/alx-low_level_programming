#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 *
 * @head: Pointer to head of linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
