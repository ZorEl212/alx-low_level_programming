#include <ctype.h>
#include "main.h"

/**
 * _isupper - check for uppercase alphabets
 * @zor: alphabet to be examined
 *
 * Return: 0 (success)
 */

int _isupper(int zor)
{
	if (isupper(zor) != 0)
		return (1);
	return (isupper(zor));
}
