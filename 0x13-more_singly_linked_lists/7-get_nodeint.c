#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return:  returns a pointer to the nth node of the linked list.
 *         If the node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head == NULL || i < index ? NULL : head);
}
