#include "hash_tables.h"


/**
 * key_index - calculete the index for a key
 * @key : key string
 * @size: size of the hash table
 *
 * Return: index number
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
