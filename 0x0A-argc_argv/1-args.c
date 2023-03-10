#include <stdio.h>

/**
 * main - print number of arguments passed to it.
 * @argc: argument number
 * @argv: pointer to the string of arguments"
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc; i++)
	{
		argv[i] = argv[i];
	}
	return (0);
}
