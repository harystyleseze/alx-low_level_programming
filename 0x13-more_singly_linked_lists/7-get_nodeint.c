#include "lists.h"

/**
 * get_nodeint_at_index - return node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the returned node
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tempt = head;

	while (tempt && count < index)
	{
		tempt = tempt->next;
		count++;
	}

	return (tempt ? tempt : NULL);
}
