#include "main.h"

/**
 * print_numbers - print from 0-9
 *
 * Return: 1(success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
