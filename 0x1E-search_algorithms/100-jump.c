#include "search_algos.h"


/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
*/

int jump_search(int *array, size_t size, int value)
{
	size_t interval, i, k;

	if (!array)
		return (-1);
	interval = (int)sqrt(size);
	k = 0;
	while (array[k] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		k += interval;

		if (k > size)
		{
			k = size - 1, k += interval;
			break;
		}
	}
	k -= interval;
	printf("Value found between indexs [%ld] and [%ld]\n", k, k + interval);

	for (i = k; i <= (k + interval) && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
