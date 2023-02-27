#include <string.h>

/**
 * rev_string - reverse string
 * @str: input string
 *
 * Return: Null
 */

void rev_string(char *str)
{
	int i, len, tmp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tmp = str[i];

		str[i] = str[len - i - 1];

		str[len - i - 1] = tmp;
	}

}
