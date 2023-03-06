#include <stddef.h>
#include "main.h"

/**
 * _strstr - locates a substring in a string
 *
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;

		char *substr = needle;

		while (*haystack != '\0' && *substr != '\0' && *haystack == *substr)
		{
			haystack++;
			substr++;
		}

		if (*substr == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}

	return (NULL);
}
