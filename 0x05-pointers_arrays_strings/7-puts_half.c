#include <string.h>
#include "main.h"

/**
 * puts_half - prints other half of string
 * @str: input string
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int x, len, y;

	len = strlen(str);
	if (len % 2 == 0)
		y = len / 2;
	else
		y = (len / 2) + 1; /* Error prone for multiples of 3 */

	for (x = y; x < len ; x++)
		_putchar(str[x]);
	_putchar('\n');

}
