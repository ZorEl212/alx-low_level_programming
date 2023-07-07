#include "hash_tables.h"

/**
 * hash_table_print - print elements of hash table
 * @ht: hash table to print
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *head;
	bool pair_printed = false;

	if (ht == NULL || ht->array == NULL)
		printf("{}\n");

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
			{
				continue;
			}
			head = ht->array[i];

			while (head != NULL)
			{
				if (pair_printed == true)
					printf(", ");

				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				pair_printed = true;
				head = head->next;
			}

		}
		printf("}\n");

	}

}
