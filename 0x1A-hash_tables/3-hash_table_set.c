#include "hash_tables.h"

/**
 * new_node - create a new node with given key and value
 * @key: key string
 * @value: value string
 *
 * Return: Created node or Null in case of failure
*/

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *item;
	char *val_cpy;
	char *key_cpy;

	val_cpy = strdup(value);
	key_cpy = strdup(key);

	if (val_cpy == NULL || key_cpy == NULL)
	{
		free(val_cpy);
		free(key_cpy);
		return (NULL);
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = key_cpy;
	item->value = val_cpy;

	return (item);

}


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
	hash_node_t *current, *item;

	if (key == NULL || strlen(key) == 0 || ht == NULL
	|| ht->array == NULL || ht->size == 0)
		return (0);

	index = key_index((unsigned const char*) key, ht->size);

	if (ht->array == NULL)
		return (0);

	item = new_node(key, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		item->next = NULL;
		return (1);
	}

	else if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(key, current->key) == 0)
			{
				current->value = strdup(item->value);
				return (1);
			}
			current = current->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;

		return (1);
	}

	else
		return (0);
}
