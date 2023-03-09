#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_palindrome(s, len, 0));
}

/**
 * check_palindrome -  helper function to check if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 * @index: the current index being compared
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
	if (index >= len / 2)
		return (1);
	if (s[index] == s[len - 1 - index])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
