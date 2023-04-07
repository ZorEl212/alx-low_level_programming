#include "main.h"

#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed in binary format
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bits = sizeof(unsigned long int) * 8;
	int flag = 0;

	mask <<= bits - 1;

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{

		}
		else
		{
			flag = 1;

			if ((n & mask) == 0)
				_putchar('0');
			else
				_putchar('1');
		}

		mask >>= 1;
	}


	if (flag == 0)
		putchar('0');
}
