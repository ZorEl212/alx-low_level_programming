#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check for digits
 * @zor: tahe input to be evaluated
 *
 * Return: 0 (success)
 */

int _isdigit(int zor)
{
	if (isdigit(zor) != 0)
		return (1);
	return (isdigit(zor));
}
