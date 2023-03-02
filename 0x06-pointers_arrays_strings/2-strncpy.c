#include <string.h>
#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: n length of dest string
 *
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
