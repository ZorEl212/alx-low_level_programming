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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
