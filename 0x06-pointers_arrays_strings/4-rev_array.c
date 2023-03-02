#include "main.h"

/**
 * reverse_array - reverse array elements
 * @arr: array to be reversed
 * @n: number of array elements
 *
 * Return: nothing
 */

void reverse_array(int *arr, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
