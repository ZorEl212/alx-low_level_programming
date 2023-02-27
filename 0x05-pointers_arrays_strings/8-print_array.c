/**
 * print_array - print specified number of elements from array
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: Null
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= n - 1 && i != 0)

		printf(", ");

		printf("%d", a[i]);
	}

	printf("\n");
}
