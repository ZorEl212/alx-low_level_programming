#include "header.h"
/**
 * print_alphabet - loop through each alphabet
 *
 * Return: null (no return value)
 */

void print_alphabet(void)
{
		int x = 97;
	while (x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
