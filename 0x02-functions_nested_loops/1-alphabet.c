#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 *Return: return 0 (success)
 */


int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * _putchar - print a character
 *
 * Return: return 0 (success)
 */
int _putchar(char c)
{
	putchar(c);
	return 0;
}

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
	return;
}
