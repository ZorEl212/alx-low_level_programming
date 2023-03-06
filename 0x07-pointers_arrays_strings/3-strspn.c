#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: bytes to look for
 *
 * Return: num bytes in the segment of s w/c consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		unsigned int found = 0;

		unsigned int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		length++;
		s++;
	}

	return (length);
}
