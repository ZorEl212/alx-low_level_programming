#include "main.h"

/**
 * print_sign - print "+", "-", "0" depending on the int
 * @x: take int to evaluated
 *
 * Return: -1 (negative intiger)
 *          0 (zero)
 *          1 (positive intiger)
 */

int print_sign(int x)
{
	if (x > 0)
	{
		putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
