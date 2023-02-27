#include<strcpy.h>
#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: copy destination
 * @src: source
 *
 * Return: pointer to dest
 */


char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
