#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate string determining dest length from src
 * @dest: destination string
 * @src: source string
 * @n: n bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
