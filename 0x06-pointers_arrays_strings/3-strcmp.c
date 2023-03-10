#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0(success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] > s2[i])
			return (15);
	i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
