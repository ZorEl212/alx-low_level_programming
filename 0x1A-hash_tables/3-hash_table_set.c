#include "hash_tables.h"

/**
 * new_item - create a new node for items
 * @key: key associated with the node
 * @value: value associated withe the node
 *
 * Return: new node (address)
*/

hash_node_t *new_item(const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));

	item->key = strdup(key);
	item->value = strdup(value);

	return (item);
}

/**
 * hash_table_set - insert a new item on the hash table
 *                  or update existing item.
 * @ht: hash table
 * @key: key associated with the item
 * @value: value associated with the item
 *
 * Return: 1(success) or 2(failure)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *item;
	unsigned long int index;

	if (key == NULL || ht == NULL || ht->array == NULL
	|| strlen(key) == 0)

		return (0);

	index = key_index((unsigned const char*)key, ht->size);
	item = new_item(key, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		item->next = NULL;
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(key, current->key) == 0)
			{
				current->value = strdup(value);
				return (1);
			}

			current = current->next;
		}

		ht->array[index] = item;

		return (1);
	}
	return (0);
}
