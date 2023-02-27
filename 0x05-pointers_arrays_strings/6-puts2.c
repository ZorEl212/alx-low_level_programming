#include <string.h>
#include "main.h"
/**
 * puts2 - print skipping one element
 * @str: string to evaluate
 *
 * Return: Null
 */

void puts2(char *str)
{
	int x, len;

	len = strlen(str);
	for (x = 0; x < len ; x += 2)
		_putchar(str[x]);
}
