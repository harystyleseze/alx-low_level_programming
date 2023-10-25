#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
