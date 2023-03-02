#include <string.h>
#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: Destination array
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
