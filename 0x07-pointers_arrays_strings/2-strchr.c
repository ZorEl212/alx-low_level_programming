#include "main.h"

/**
 * _strchr - locate a char in a string.
 * @s: string
 * @c: char to find
 *
 * Return: NULL if char not found
 *         pointer to 1st occurance of char c.
 */

char *_strchr(char *s, char c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
