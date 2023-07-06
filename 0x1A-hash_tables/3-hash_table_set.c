#include "hash_tables.h"


/**
 * hash_table_set - add a node on the table based on index
 * @ht: hash table to add to
 * @key: key string
 * @value: value string
 *
 * Return: (1) - success or (0) - failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return (0);
	index = key_index((unsigned const char*) key, ht->size);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = (char *) key;
	item->value = (char *) value;
	if (ht->array == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		item->next = NULL;
		return (1);
	}

	else if (ht->array[index] != NULL)
	{
		item->next = ht->array[index];
		ht->array[index] = item;

		return (1);
	}

	else
		return (0);
}
