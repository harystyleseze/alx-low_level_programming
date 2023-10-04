#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Use malloc to dub=plicate string
 * @str: specific string
 * Return: Pointer to newly duped string
 * or NULL if empty or insufficient
 */

char *_strdup(char *str)
{
	char *array;
	int count1, count2;

	if (str == NULL)
		return (NULL);

	for (count1 = 0; str[count1] != '\0'; count++)
		;

	array = malloc(count1 * sizeof(*array) + 1);
	if (array == NULL)
		return (NULL);

	for (count2 = 0; count2 < i; count2++)
		array[count2] = str[count2];
	array[count2] = '\0';

	return (array);
}
