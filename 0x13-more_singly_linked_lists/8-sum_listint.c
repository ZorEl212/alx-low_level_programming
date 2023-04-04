#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) of the linked list.
 *         If the linked list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
