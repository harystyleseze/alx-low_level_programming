#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: data inside the deleted elements,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempt;
	int num_node;

	if (!head || !*head)
		return (0);

	num_node = (*head)->n;
	tempt = (*head)->next;
	free(*head);
	*head = tempt;

	return (num_node);
}
