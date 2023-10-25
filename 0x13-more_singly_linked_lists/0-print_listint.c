#include "lists.h"

/**
 * print_listint - prints all the elements in the linked list
 * @h: linked list of type listint_t to be printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_node++;
		h = h->next;
	}

	return (num_node);
}
