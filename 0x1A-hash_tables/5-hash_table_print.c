#include "hash_tables.h"

/**
 * hash_table_print - print a hash table like a python directory
 * @ht: hash table to print
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	bool printed = false;

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed == true)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			printed = true;
			current = current->next;
		}
	}
	printf("}\n");
}
