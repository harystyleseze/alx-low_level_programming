#include "lists.h"

/**
 * sum_listint - sum all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum_list += temp->n;
		temp = temp->next;
	}

	return (sum_list);
}
