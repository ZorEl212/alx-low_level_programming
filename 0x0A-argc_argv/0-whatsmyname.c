#include <stdio.h>

/**
 * main - print program name
 * @argc: argument number
 * @argv: pointer to string to argument
 *
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	argc = argc; /* bypass unused var warning for gcc */

	printf("%s\n", argv[0]);
	return (0);
}
