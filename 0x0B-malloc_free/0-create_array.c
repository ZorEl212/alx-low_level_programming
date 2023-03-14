#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of string and fill it with spcifc char c
 * @size: size of the array
 * @c: character to fill
 *
 * Return: pointer to string or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
