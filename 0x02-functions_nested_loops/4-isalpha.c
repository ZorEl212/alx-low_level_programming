#include<<ctype.h>
#include "main.h"

/**
 * _isalpha - check for lowercase or uppercase
 *@zor: the char to be evaluated
 *
 * Return: 0 - (isn not an alphabet)
 *         1 - success
 */

int _isalpha(int zor)
{
	if (isalpha(zor) != 0)
		return (1);
	return (isalpha(zor));
}
