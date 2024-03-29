#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: first unsigned long int number
 * @m: second unsigned long int number
 *
 * Return: number of bits needed to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			count++;

		xor_result >>= 1;
	}

	return (count);
}
