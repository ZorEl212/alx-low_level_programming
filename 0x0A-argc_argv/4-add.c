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
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
