#include "hash_tables.h"

/**
 * hash_table_delete - free all mem allocs for the hash table
 * @ht: hash table to delete
 *
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *temp;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = temp;
		}
	}
	free(ht->array);
	free(ht);

}
