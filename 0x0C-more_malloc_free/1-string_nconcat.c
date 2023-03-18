#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat two strings with n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 *
 * Return: pointer to  final string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	arr = malloc(len1 + n + 1);
	if (arr == NULL)
		return (NULL);

for (i = 0; i < len1; i++)
{
	arr[i] = s1[i];
}

for (j = 0; j < n; j++)
{
	arr[i + j] = s2[j];
}
arr[i + j] = '\0';

return (arr);
}
