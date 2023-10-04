#include "main.h"
#include <stdlib.h>

/**
 * str_concat - to concatenates two strings.
 * @s1: first string to concat.
 * @s2: second string concat.
 * Return: pointer of an array of chars
 * or NULL if unsuccessful
 */
char *str_concat(char *s1, char *s2)
{
	char *stp;
	unsigned int i, j, k, li;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	stp = malloc(sizeof(char) * (i + j + 1));

	if (stp == NULL)
	{
		free(stp);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		stp[k] = s1[k];

	li = j;
	for (j = 0; j <= li; k++, j++)
		stp[k] = s2[j];

	return (stp);
}
