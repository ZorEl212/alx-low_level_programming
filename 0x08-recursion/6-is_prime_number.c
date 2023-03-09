#include "main.h"

/**
 * is_prime_number - checks if a number is prime recursively
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Base cases */
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);

    /* Check if n is divisible by 2 or 3 */
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

    /* Check if n is divisible by any number from 5 to sqrt(n) */
	return (is_prime_helper(n, 5));
}

/**
 * is_prime_helper - recursive helper function for is_prime_number
 * @n: the number to check
 * @div: the divisor to try
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
    /* If the divisor is greater than the square root of n, n is prime */
	if (div * div > n)
		return (1);

    /* If n is divisible by the divisor, it is not prime */
	if (n % div == 0)
		return (0);

    /* Try the next divisor */
	return (is_prime_helper(n, div + 2));
}
