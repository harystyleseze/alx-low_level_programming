#include "lists.h"

/**
 * listint_len - return number of elements in the linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}

	return (num_node);
}
