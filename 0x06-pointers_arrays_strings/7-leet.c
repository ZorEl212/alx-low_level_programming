#include "main.h"

/**
 * leet - convert string to leet speaking
 * @str: input string
 *
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;

	char leet_chars[] = "43170";

	char replace_chars[] = "aeotlAEOTL";

	int j, k;

	while (str[i] != '\0')
	{
		j = 0;
		while (replace_chars[j] != '\0')
		{
			if (str[i] == replace_chars[j])
			{
				k = j % 5;

				str[i] = leet_chars[k];

				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
