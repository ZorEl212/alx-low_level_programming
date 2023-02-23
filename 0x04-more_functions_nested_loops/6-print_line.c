#include "main.h"

/**
 * print_line - print "_" n times followed by newline
 * @n: number of times "_" to be printed
 *
 * Return: 0 (success)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
