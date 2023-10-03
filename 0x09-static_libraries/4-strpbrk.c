#include "main.h"

/**
 * _strpbrk - locate and searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count1, count2;

	for (count1 = 0; *(s + count1) != '\0'; count1++)
	{
		for (count2 = 0; *(accept + count2) != '\0'; count2++)
		{
			if (*(s + count1) == *(accept + count2))
				return (s + count1);
		}
	}
	return ('\0');
}
