#include "main.h"

/**
 * _strchr - locate a character in string
 * @s: pointer to char
 * @c: char params to found
 * Return: a pointer to c in s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
