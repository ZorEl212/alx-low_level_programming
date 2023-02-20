#include <stdio.h>

/**
 * main -entery point
 *
 * Description: Print sizes of diffrent data types in bytes
 * Return: Return 0 (execution success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)", sizeof(char));
	printf("\nSize of an int: %i byte(s)", sizeof(int));
	printf("\nSize of a long int: %i byte(s)", sizeof(long int));
	printf("\nSize of a long long int: %i byte(s)", sizeof(long long int));
	printf("\nSize of a float: %i byte(s)", sizeof(float));
	return (0);
}
