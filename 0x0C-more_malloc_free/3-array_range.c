#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: The pointer to the newly created array.
 *         If min > max, returns NULL.
 *         If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int len, i;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
