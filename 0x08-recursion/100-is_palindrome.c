#include "main.h"

/**
 * _strlen_recursion - lenght of string
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pal1 - palindrome
 * @s: pointer to string
 * @x: position
 * Return: boolena
 */

int pal1(char *s, int x)
{
	if (x < 1)
	{
		return (1);
	}

	if (*s == *(s + x))
	{
		return (pal1(s + 1, x - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal1(s, len - 1));
}
