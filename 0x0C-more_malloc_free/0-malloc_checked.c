#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory address
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated mem address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
