#include "main.h"

/**
 * _strspn - get length for string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
