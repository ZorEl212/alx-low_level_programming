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
	y = len / 2;
	for (x = y; x < len ; x++)
		_putchar(str[x]);
	_putchar('\n');

}
