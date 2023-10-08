#include <stdlib.h>
#include "main.h"
/**
 * _strlen - return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int count1;

	for (count1 = 0; string[count1] != '\0'; count1++)
		;
	return (count1);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, count1, count2;

	num = n;

	if (s1 == NULL) /* accounts for NULL string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* accounts for negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* accounts for n or more of s2 string */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to account for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL)
		return (NULL);

	for (count1 = 0; s1[count1] != '\0'; count1++) /* concatenate strings */
		ptr[count1] = s1[count1];
	for (count2 = 0; count2 < num; count2++)
		ptr[count1 + count2] = s2[count2];
	ptr[count1 + count2] = '\0';

	return (ptr);
}
