#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *temp;

	for (temp = h, num_nodes = 0; temp; temp = temp->next, num_nodes++)
		printf("%d\n", temp->n);
	return (num_nodes);
}
