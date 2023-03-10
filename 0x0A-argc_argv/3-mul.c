#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: pointer to string of arguments
 *
 * Return: 1(Error) or 0(Success)
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[i - 1]) * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
