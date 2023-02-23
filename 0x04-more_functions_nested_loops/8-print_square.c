#include "main.h"

/**
 * print_square - prints square of "#"
 * @size: square size
 */

void print_square(int size)
{
	int x = 0, y;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
