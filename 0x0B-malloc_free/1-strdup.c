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
	int n;

	int len = strlen(str);

	char *arr = (char *)malloc(sizeof(char) * len);

	if (str == NULL || arr == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		arr[n] = str[n];
	}

	return (arr);
}
