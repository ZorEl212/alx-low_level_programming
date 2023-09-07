#include "hash_tables.h"

/**
 * hash_table_get - get a value from a table using a key
 * @ht: hash table
 * @key: key to search for
 *
 * Return: Value (on success) or NULL (on failure)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0
	|| ht->array == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0 && current->value != NULL)
		{
			if (current->value == NULL)
				return (NULL);
			return (current->value);

		}
		current = current->next;
	}

	return (NULL);
}
