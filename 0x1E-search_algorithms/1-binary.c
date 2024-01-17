#include "search_algos.h"

void print_subarray(int *array, size_t left, size_t right)
{
    printf("Searching in array: ");
    for (size_t i = left; i < right; i++)
    {
        if (i > left) {
            printf(", ");
        }
        printf("%d", array[i]);
    }
    printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
  size_t left = 0, right = size;
    if (array == NULL) {
        return -1;
    }

        while (left < right)
    {
        size_t mid = left + (right - left) / 2;

        print_subarray(array, left, right);

        if (value == array[mid])
        {
	  print_subarray(array, mid, right);
            return mid;
        }
        else if (value < array[mid])
        {
            right = mid -1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}
