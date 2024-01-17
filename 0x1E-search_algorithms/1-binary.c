#include "search_algos.h"


/**
 * print_subarray - prints a subarray of orignal array being searched
 * @array: pointer to the first element of the array to search in
 * @left: leftmost index of subarray
 * @right: rightmost index of subarray
 *
 * Return: void
 */
void print_subarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size;

	if (array == NULL)
		return (-1);

	while (left < right)
	{
		size_t mid = left + (right - left) / 2;

		print_subarray(array, left, right);

	if (value == array[mid])
	{
		print_subarray(array, mid, right);
		return (mid);
	}
	else if (value < array[mid])
		right = mid - 1;
	else
		left = mid + 1;
	}

	return (-1);
}
