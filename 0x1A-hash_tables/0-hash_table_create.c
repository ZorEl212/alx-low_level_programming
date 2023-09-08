#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table with specifc size
 * @size: size of he new hash table
 *
 * Return: newly created hash table (address)
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i > table->size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
