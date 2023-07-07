#include "hash_tables.h"


/**
 * hash_table_get - fetch a value based on matching key
 * @ht: hash table to search in
 * @key: key string
 *
 * Return: return a fetched value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0 && head->value != NULL)
		{
			return (head->value);
		}

		head = (head->next);
	}

	return (NULL);
}
