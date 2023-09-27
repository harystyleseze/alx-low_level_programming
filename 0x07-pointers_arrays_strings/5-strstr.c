#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, count;

	i = 0;
	count = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + count] != '\0' && haystack[i + count] != '\0'
		       && needle[j + count] == haystack[i + count])
		{
			if (haystack[i + count] != needle[j + count])
				break;
			count++;
		}
		if (needle[j + count] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}

	return (NULL);
}
