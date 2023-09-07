#include "hash_tables.h"

/**
 * key_index - calculate the key index based on hash value
 * @key: provided key value
 * @size: hash table size
 *
 * Return: calculated index number
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
