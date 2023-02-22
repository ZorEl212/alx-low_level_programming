#include <ctype.h>
#include "main.h"

/**
 * _islower - check for lowercase
 * @zor: take char to be evaluated
 *
 * Return: 1 (success)
 *         0 (not a lowercase)
 */

int _islower(int zor)
{
	if (islower(zor) != 0)
		return (1);
	return (islower(zor));
}
