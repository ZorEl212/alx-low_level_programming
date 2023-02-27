/**
 * swap_int - swap values of two variables
 * @a: number 1
 * @b: number 2
 *
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}
