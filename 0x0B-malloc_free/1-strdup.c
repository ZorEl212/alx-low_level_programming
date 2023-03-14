#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 *
 * Return: ponter to duplicated string or NULL
 */

char *_strdup(char *str)
{
	int n, len;

	char *arr;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	arr = (char *)malloc(sizeof(char) * len + 1);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		arr[n] = str[n];
	}

	return (arr);
}
