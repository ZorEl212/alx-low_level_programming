#include "main.h"

/**
 * _memcpy - copy a memory area
 * @dest: destination string
 * @src: source string
 * @n: n bytes of memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
