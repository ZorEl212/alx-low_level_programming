#include "main.h"

/**
 * more_numbers -print 0-14 x10 times
 *
 * Return: 0 (success)
 */

void more_numbers(void)
{
	int y, x;

	y = 0;

	while (y < 10)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}

		_putchar('\n');

		y++;
	}
}
